#pragma once

#ifndef __COMPONENTMGR_H__
#define __COMPONENTMGR_H__

class CComponent;

class CComponentMgr final
{
public:
	explicit CComponentMgr();
	~CComponentMgr();

public:
	//--------------------------------------
	// ������Ʈ ������Ÿ�� �߰�
	// pName : ������Ʈ �̸�
	// pPrototype : ������Ʈ ��ü
	// ��ȯ�� : ���� true, ���� false
	//--------------------------------------
	bool AddComponentPorototype(const TCHAR* pName, CComponent* pPrototype);

	//--------------------------------------
	// ������Ʈ ����
	// pName : ������Ʈ �̸�
	// ��ȯ�� : ���� ������ ������Ʈ, ���� nullptr
	//--------------------------------------
	CComponent* CloneComponent(const TCHAR* pName);

private:
	unordered_map<wstring, CComponent*> m_umapComponent;
};

#endif // !__COMPONENTMGR_H__

