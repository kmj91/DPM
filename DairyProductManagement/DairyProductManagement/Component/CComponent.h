#pragma once

#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class CComponent abstract
{
protected:
	using comSeq = COMPONENT_SEQ::SEQ;
	using comTag = COMPONENT_TAG::TAG;

public:
	explicit CComponent();
	virtual ~CComponent();

public:
	virtual void InitalizePrototype() = 0;
	virtual void Initalize() = 0;
	virtual CComponent* Clone(Arg* pArg = nullptr) = 0;
	virtual void Update() = 0;

public:
	comSeq GetComSeq() { return m_comSeq; }
	void SetComSeq(comSeq enComSeq) { m_comSeq = enComSeq; }
	comTag GetComTag() { return m_comTag; }
	void SetComTag(comTag enComTag) { m_comTag = enComTag; }

private:
	comSeq m_comSeq;		// 컴포넌트 시퀀스 번호
	comTag m_comTag;		// 컴포넌트 태그
};

#endif // !__COMPONENT_H__

