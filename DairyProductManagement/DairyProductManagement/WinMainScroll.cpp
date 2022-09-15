// 윈도우 메인 로직
#include "framework.h"
#include "WinMain.h"

#include "Util/CScreenDib.h"			// 스크린 버퍼
#include "Util/CSpriteDib.h"			// 스프라이트 버퍼

#include "Component/CRectTransform.h"	// UI 위치 정보

#include "BaseObj/CDialogBox.h"			// UI 다이얼로그 박스


CScreenDib *g_pScreenDib;				// 스크린 버퍼
CSpriteDib* g_pSpriteDib;				// 스프라이트 버퍼
CComponentMgr* g_pComponentMgr;			// 컴포넌트 매니저
CObjMgr* g_pObjMgr;						// 오브젝트 매니저

//-------------------------
// 메인 초기화
//-------------------------
void InitMain() {
	// 스크린 버퍼
	g_pScreenDib = new CScreenDib(WINCX, WINCY, 32);
	// 스프라이트 버퍼
	g_pSpriteDib = new CSpriteDib(500, 0xff00ff);
	// 컴포넌트 매니저
	g_pComponentMgr = new CComponentMgr();
	// 오브젝트 매니저
	g_pObjMgr = new CObjMgr();

	// 컴포넌트
	CComponent* pCreateCom = new CRectTransform();
	g_pComponentMgr->AddComponentPorototype(L"RectTransform", pCreateCom);

	// 오브젝트
	CBaseObj* pCreateObj = new CDialogBox();
	g_pObjMgr->AddObjectPorototype(L"DialogBox", pCreateObj);
	Arg arg;
	arg.umapArg.emplace(make_pair(ARG_TYPE::POSITION, Vector3(20.f, 20.f, 0.f)));
	arg.umapArg.emplace(make_pair(ARG_TYPE::SIZE, Size(400.f, 500.f)));
	g_pObjMgr->CloneObject(L"DialogBox", &arg);
}

//-------------------------
// 메인 정리
//-------------------------
void ReleaseMain() {
	SAFE_DELETE(g_pScreenDib);
	SAFE_DELETE(g_pSpriteDib);
}

//-------------------------
// 메인 루프 업데이트 함수
//-------------------------
void MainUpdate() {
	g_pObjMgr->Render();
}