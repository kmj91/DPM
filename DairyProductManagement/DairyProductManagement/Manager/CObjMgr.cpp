#include "framework.h"
#include "CObjMgr.h"

CObjMgr::CObjMgr() : m_umapPrototype{}, m_arrObjectList{}
{
	
}

CObjMgr::~CObjMgr()
{
	Release();
}

void CObjMgr::Update()
{
}

void CObjMgr::LateUpdate()
{
}

void CObjMgr::Render()
{
}

void CObjMgr::Release()
{
}

bool CObjMgr::AddObjectPorototype(const TCHAR* pName, CBaseObj* pPrototype)
{
	auto iter_find = m_umapPrototype.find(pName);
	// 이미 등록된 이름이면 예외
	if (m_umapPrototype.end() != iter_find) {
		return false;
	}
	// 프로토타입 초기화
	pPrototype->InitalizePrototype();
	// 프로토타입 오브젝트 추가
	m_umapPrototype.emplace(make_pair(pName, pPrototype));

	return true;
}

bool CObjMgr::CloneObject(const TCHAR* pName, Arg* pArg, CBaseObj** ppOutObj)
{
	auto iter_find = m_umapPrototype.find(pName);
	// 복제할 오브젝트를 찾지 못하면 예외
	if (m_umapPrototype.end() == iter_find) {
		return false;
	}
	// 프로토타입 오브젝트 복제
	CBaseObj* pCopyObj = iter_find->second->Clone(pArg);
	if (pCopyObj->GetObjSeq() == objSeq::END) {
		SAFE_DELETE(pCopyObj);
		return false;
	}
	// 오브젝트 리스트에 저장
	m_arrObjectList[pCopyObj->GetObjSeq()].emplace_back(pCopyObj);
	// 아웃 변수가 있다면 복제한 오브젝트 저장
	if (ppOutObj != nullptr) {
		*ppOutObj = pCopyObj;
	}

	return true;
}
