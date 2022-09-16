// 베이스 오브젝트 UI

#pragma once

#ifndef __OBJUI_H__
#define __OBJUI_H__

#include "CBaseObj.h"

class CObjUI abstract :
	public CBaseObj
{
private:
	using super = CBaseObj;

public:
	explicit CObjUI();
	virtual ~CObjUI();

	CObjUI(CObjUI& _copy);

public:
	// CBaseObj을(를) 통해 상속됨
	virtual void InitalizePrototype() override;
	virtual void Initalize(Arg* pArg = nullptr) = 0;
	virtual void Release() = 0;
	virtual CBaseObj* Clone(Arg* pArg = nullptr) = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Click(mk enMk) = 0;

public:
	virtual void Move(Vector3 _vecMovePos) = 0;
	virtual void Cloase() = 0;
	virtual void Show() = 0;
	virtual void Hide() = 0;
};

#endif // !__OBJUI_H__

