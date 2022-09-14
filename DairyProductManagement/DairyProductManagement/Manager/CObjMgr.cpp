#include "framework.h"
#include "CObjMgr.h"

#include "BaseObj/CBaseObj.h"

CObjMgr::CObjMgr()
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

	m_umapPrototype.insert(make_pair(pName, pPrototype));

	return true;
}

bool CObjMgr::CloneObject(const TCHAR* pName)
{
	auto iter_find = m_umapPrototype.find(pName);
	// ������ ������Ʈ�� ã�� ���ϸ� ����
	if (m_umapPrototype.end() == iter_find) {
		return false;
	}

	CBaseObj* pCopyObj = iter_find->second->Clone();
	m_arrObjectList[pCopyObj->GetSeq()].emplace_back(pCopyObj);

	return true;
}
