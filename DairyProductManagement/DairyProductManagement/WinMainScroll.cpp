// 윈도우 메인 로직
#include "framework.h"
#include "WinMain.h"

#include "CScreenDib.h"		// 스크린 버퍼
#include "CSpriteDib.h"		// 스프라이트 버퍼


CScreenDib *g_pScreenDib;
CSpriteDib* g_pSpriteDib;

//-------------------------
// 메인 초기화
//-------------------------
void InitMain() {
	// 스크린 버퍼
	g_pScreenDib = new CScreenDib(WINCX, WINCY, 32);
	// 스프라이트 버퍼
	g_pSpriteDib = new CScreenDib(500, 0xff00ff);
}

//-------------------------
// 메인 루프 업데이트 함수
//-------------------------
void MainUpdate() {

}