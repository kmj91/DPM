#pragma once

#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class CComponent abstract
{
private:
	using seq = COMPONENT_SEQ::SEQ;

public:
	explicit CComponent();
	virtual ~CComponent();

public:
	virtual void Update() = 0;

public:
	seq GetSeq() { return m_seq; }
	void SetSeq(seq enSeq) { m_seq = enSeq; }

private:
	seq m_seq;
};

#endif // !__COMPONENT_H__

