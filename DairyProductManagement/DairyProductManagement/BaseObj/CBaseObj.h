#pragma once

#ifndef __BASEOBJ_H__
#define __BASEOBJ_H__

class CComponent;
class CTransform;

class CBaseObj abstract
{
private:
	using seq = COMPONENT_SEQ::SEQ;
	using mk = MOUSE_STATE::MK;

public:
	explicit CBaseObj();
	virtual ~CBaseObj();

public:
	virtual void Initalize() = 0;
	virtual void Release() = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Click(mk enMk) = 0;

private:
	list<CComponent*> m_arrComponetList[seq::END];		// ������Ʈ�� �������ִ� ������Ʈ��

public:
	CTransform* m_pTransform;							// ��ġ ���� ������Ʈ
};

#endif // !__BASEOBJ_H__

