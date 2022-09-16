// 베이스 오브젝트

// 최상위 오브젝트

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
	// 오브젝트 컴포넌트 추가
	// _enComSeq : 컴포넌트 시퀀스 번호
	// _pComponent : 컴포넌트 객체
	// 반환값 : 성공 true, 실패 false
	//--------------------------------------
	bool AddComponent(comSeq _enComSeq, CComponent* _pComponent);
	//--------------------------------------
	// UI 포함 오브젝트 추가
	// _hasObject : 포함할 오브젝트
	//--------------------------------------
	void AddObject(CBaseObj* _hasObject);
public:
	objSeq GetObjSeq() { return m_objSeq; }
	void SetObjSeq(objSeq enObjSeq) { m_objSeq = enObjSeq; }

private:
	objSeq m_objSeq;									// 오브젝트 시퀀스 번호

protected:
	list<CComponent*> m_arrComponentList[comSeq::END];	// 오브젝트가 가지고있는 컴포넌트들
	list<CBaseObj*> m_listHasObj;						// 포함 오브젝트

public:
	CTransform* m_pTransform;							// 위치 정보 컴포넌트
};

#endif // !__BASEOBJ_H__

