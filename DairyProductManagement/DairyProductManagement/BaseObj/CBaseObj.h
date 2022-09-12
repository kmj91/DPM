#pragma once

#ifndef __BASEOBJ_H__
#define __BASEOBJ_H__

class CComponent;

class CBaseObj abstract
{
private:
	using seq = COMPONENT_SEQ::SEQ;

public:
	explicit CBaseObj();
	virtual ~CBaseObj();

public:
	virtual void Initalize() = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

private:
	list<CComponent*> m_arrComponetList[seq::END];
};

#endif // !__BASEOBJ_H__

