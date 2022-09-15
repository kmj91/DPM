#include "framework.h"
#include "CComponentMgr.h"

CComponentMgr::CComponentMgr() : m_umapComponent{}
{
}

CComponentMgr::~CComponentMgr()
{
}

bool CComponentMgr::AddComponentPorototype(const TCHAR* pName, CComponent* pPrototype)
{
	auto iter_find = m_umapComponent.find(pName);
	// 이미 등록된 이름이면 예외
	if (m_umapComponent.end() != iter_find) {
		return false;
	}
	// 프로토타입 초기화
	pPrototype->InitalizePrototype();
	// 프로토타입 컴포넌트 추가
	m_umapComponent.insert(make_pair(pName, pPrototype));

    return true;
}

CComponent* CComponentMgr::CloneComponent(const TCHAR* pName)
{
	auto iter_find = m_umapComponent.find(pName);
	// 복제할 컴포넌트를 찾지 못하면 예외
	if (m_umapComponent.end() == iter_find) {
		return nullptr;
	}
	// 프로토타입 컴포넌트 복제 반환
	return iter_find->second->Clone();
}
