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
	// �̹� ��ϵ� �̸��̸� ����
	if (m_umapPrototype.end() != iter_find) {
		return false;
	}
	// ������Ÿ�� �ʱ�ȭ
	pPrototype->InitalizePrototype();
	// ������Ÿ�� ������Ʈ �߰�
	m_umapPrototype.emplace(make_pair(pName, pPrototype));

	return true;
}

bool CObjMgr::CloneObject(const TCHAR* pName, Arg* pArg, CBaseObj** ppOutObj)
{
	auto iter_find = m_umapPrototype.find(pName);
	// ������ ������Ʈ�� ã�� ���ϸ� ����
	if (m_umapPrototype.end() == iter_find) {
		return false;
	}
	// ������Ÿ�� ������Ʈ ����
	CBaseObj* pCopyObj = iter_find->second->Clone(pArg);
	if (pCopyObj->GetObjSeq() == objSeq::END) {
		SAFE_DELETE(pCopyObj);
		return false;
	}
	// ������Ʈ ����Ʈ�� ����
	m_arrObjectList[pCopyObj->GetObjSeq()].emplace_back(pCopyObj);
	// �ƿ� ������ �ִٸ� ������ ������Ʈ ����
	if (ppOutObj != nullptr) {
		*ppOutObj = pCopyObj;
	}

	return true;
}
