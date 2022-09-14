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

public:
	explicit CBaseObj();
	virtual ~CBaseObj();

public:
	virtual void Initalize() = 0;
	virtual void Release() = 0;
	virtual CBaseObj* Clone(void* pArg = nullptr) = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Click(mk enMk) = 0;

public:
	objSeq GetSeq() { return m_seq; }
	void SetSeq(objSeq enSeq) { m_seq = enSeq; }

private:
	objSeq m_seq;
	list<CComponent*> m_arrComponetList[comSeq::END];	// 오브젝트가 가지고있는 컴포넌트들

public:
	CTransform* m_pTransform;							// 위치 정보 컴포넌트
};

#endif // !__BASEOBJ_H__

