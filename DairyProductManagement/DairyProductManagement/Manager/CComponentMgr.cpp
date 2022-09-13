#include "framework.h"
#include "CComponentMgr.h"

#include "Component/CComponent.h"

CComponentMgr::CComponentMgr() : m_umapComponent{}
{
}

CComponentMgr::~CComponentMgr()
{
}

bool CComponentMgr::AddComponentPorototype(const TCHAR* pName, CComponent* pPrototype)
{
	auto iter_find = m_umapComponent.find(pName);
	// �̹� ��ϵ� �̸��̸� ����
	if (m_umapComponent.end() != iter_find) {
		return false;
	}

	m_umapComponent.insert(make_pair(pName, pPrototype));

    return true;
}

CComponent* CComponentMgr::CloneComponent(const TCHAR* pName)
{
	auto iter_find = m_umapComponent.find(pName);
	// ������ ������Ʈ�� ã�� ���ϸ� ����
	if (m_umapComponent.end() == iter_find) {
		return nullptr;
	}

	return iter_find->second->Clone();
}
