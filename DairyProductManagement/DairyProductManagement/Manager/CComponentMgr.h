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

};

#endif // !__COMPONENTMGR_H__

