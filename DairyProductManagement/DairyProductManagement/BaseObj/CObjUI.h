// 베이스 오브젝트 UI

#pragma once

#ifndef __OBJUI_H__
#define __OBJUI_H__

#include "CBaseObj.h"

class CObjUI abstract :
	public CBaseObj
{
public:
	explicit CObjUI();
	virtual ~CObjUI();

public:
	// CBaseObj을(를) 통해 상속됨
	virtual void Initalize() = 0;
	virtual void Release() = 0;
	virtual CBaseObj* Clone(void* pArg) = 0;
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

public:
	//--------------------------------------
	// UI 포함 오브젝트 추가
	// _hasObject : 포함할 오브젝트
	//--------------------------------------
	void AddObject(CBaseObj* _hasObject);
	
protected:
	list<CBaseObj*> m_listHasObj;
};

#endif // !__OBJUI_H__

