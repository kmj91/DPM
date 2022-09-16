// ���̽� ������Ʈ

// �ֻ��� ������Ʈ

#pragma once

#ifndef __BASEOBJ_H__
#define __BASEOBJ_H__

class CComponent;
class CTransform;

class CBaseObj abstract
{
protected:
	using comSeq = COMPONENT_SEQ::SEQ;
	using objSeq = OBJECT_SEQ::SEQ;
	using mk = MOUSE_STATE::MK;
	using comTag = COMPONENT_TAG::TAG;
	using argType = ARG_TYPE::TYPE;

public:
	explicit CBaseObj();
	virtual ~CBaseObj();

	CBaseObj(CBaseObj& _copy);

public:
	virtual void InitalizePrototype() = 0;
	virtual void Initalize(Arg* pArg = nullptr) = 0;
	virtual void Release() = 0;
	virtual CBaseObj* Clone(Arg* pArg = nullptr) = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Click(mk enMk) = 0;

public:
	//--------------------------------------
	// ������Ʈ ������Ʈ �߰�
	// _enComSeq : ������Ʈ ������ ��ȣ
	// _pComponent : ������Ʈ ��ü
	// ��ȯ�� : ���� true, ���� false
	//--------------------------------------
	bool AddComponent(comSeq _enComSeq, CComponent* _pComponent);
	//--------------------------------------
	// UI ���� ������Ʈ �߰�
	// _hasObject : ������ ������Ʈ
	//--------------------------------------
	void AddObject(CBaseObj* _hasObject);
public:
	objSeq GetObjSeq() { return m_objSeq; }
	void SetObjSeq(objSeq enObjSeq) { m_objSeq = enObjSeq; }

private:
	objSeq m_objSeq;									// ������Ʈ ������ ��ȣ

protected:
	list<CComponent*> m_arrComponentList[comSeq::END];	// ������Ʈ�� �������ִ� ������Ʈ��
	list<CBaseObj*> m_listHasObj;						// ���� ������Ʈ

public:
	CTransform* m_pTransform;							// ��ġ ���� ������Ʈ
};

#endif // !__BASEOBJ_H__

