// 오브젝트 매니저

// 오브젝트 프로토타입 관리 및 오브젝트 리스트 관리

#pragma once

#ifndef __OBJMGR_H__
#define __OBJMGR_H__

class CBaseObj;
struct Arg;

class CObjMgr final
{
private:
	using objSeq = OBJECT_SEQ::SEQ;

public:
	explicit CObjMgr();
	~CObjMgr();

public:
	void Update();
	void LateUpdate();
	void Render();
	void Release();

public:
	//--------------------------------------
	// 오브젝트 프로토타입 추가
	// pName : 오브젝트 이름
	// pPrototype : 오브젝트 객체
	// 반환값 : 성공 true, 실패 false
	//--------------------------------------
	bool AddObjectPorototype(const TCHAR* pName, CBaseObj* pPrototype);

	//--------------------------------------
	// 오브젝트 복제
	// pName : 오브젝트 이름
	// ppOutObj : 생성한 오브젝트를 참조하기위한 아웃 변수
	// pArg : 복제한 프로토타입 오브젝트에 전달할 아규먼트
	// 반환값 : 성공 true, 실패 false
	//--------------------------------------
	bool CloneObject(const TCHAR* pName, Arg* pArg = nullptr, CBaseObj** ppOutObj = nullptr);

private:
	unordered_map<wstring, CBaseObj*> m_umapPrototype;	// 프로토타입 오브젝트 리스트
	list<CBaseObj*> m_arrObjectList[objSeq::END];		// 오브젝트 리스트
};

#endif // !__OBJMGR_H__

