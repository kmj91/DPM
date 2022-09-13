#pragma once

#ifndef __COMPONENTMGR_H__
#define __COMPONENTMGR_H__

class CComponent;

class CComponentMgr final
{
public:
	explicit CComponentMgr();
	~CComponentMgr();

public:
	//--------------------------------------
	// 컴포넌트 프로토타입 추가
	// pName : 컴포넌트 이름
	// pPrototype : 컴포넌트 객체
	// 반환값 : 성공 true, 실패 false
	//--------------------------------------
	bool AddComponentPorototype(const TCHAR* pName, CComponent* pPrototype);

	//--------------------------------------
	// 컴포넌트 복제
	// pName : 컴포넌트 이름
	// 반환값 : 성공 복제한 컴포넌트, 실패 nullptr
	//--------------------------------------
	CComponent* CloneComponent(const TCHAR* pName);

private:
	unordered_map<wstring, CComponent*> m_umapComponent;
};

#endif // !__COMPONENTMGR_H__

