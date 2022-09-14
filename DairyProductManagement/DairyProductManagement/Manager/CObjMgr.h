// ������Ʈ �Ŵ���

// ������Ʈ ������Ÿ�� ���� �� ������Ʈ ����Ʈ ����

#pragma once

#ifndef __OBJMGR_H__
#define __OBJMGR_H__

class CBaseObj;

class CObjMgr final
{
private:
	using objSeq = OBJECT_SEQ::SEQ;

public:
	explicit CObjMgr();
	~CObjMgr();

public:
	void Update();
	void LateUpdate();
	void Render();
	void Release();

public:
	//--------------------------------------
	// ������Ʈ ������Ÿ�� �߰�
	// pName : ������Ʈ �̸�
	// pPrototype : ������Ʈ ��ü
	// ��ȯ�� : ���� true, ���� false
	//--------------------------------------
	bool AddObjectPorototype(const TCHAR* pName, CBaseObj* pPrototype);

	//--------------------------------------
	// ������Ʈ ����
	// pName : ������Ʈ �̸�
	// ��ȯ�� : ���� true, ���� false
	//--------------------------------------
	bool CloneObject(const TCHAR* pName);

private:
	unordered_map<wstring, CBaseObj*> m_umapPrototype;	// ������Ÿ�� ������Ʈ ����Ʈ
	list<CBaseObj*> m_arrObjectList[objSeq::END];		// ������Ʈ ����Ʈ
};

#endif // !__OBJMGR_H__

