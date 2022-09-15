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
	// �̹� ��ϵ� �̸��̸� ����
	if (m_umapComponent.end() != iter_find) {
		return false;
	}
	// ������Ÿ�� �ʱ�ȭ
	pPrototype->InitalizePrototype();
	// ������Ÿ�� ������Ʈ �߰�
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
	// ������Ÿ�� ������Ʈ ���� ��ȯ
	return iter_find->second->Clone();
}
