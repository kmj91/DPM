#pragma once

#ifndef __EXTERN_H__
#define __EXTERN_H__

#include "Util/CScreenDib.h"			// 스크린 버퍼
#include "Util/CSpriteDib.h"			// 스프라이트 버퍼
#include "Manager/CObjMgr.h"			// 오브젝트 매니저
#include "Manager/CComponentMgr.h"		// 컴포넌트 매니저

extern HWND					g_hWnd;				// 윈도우 전역핸들
extern CScreenDib*			g_pScreenDib;		// 스크린 버퍼
extern CSpriteDib*			g_pSpriteDib;		// 스프라이트 버퍼
extern CComponentMgr*		g_pComponentMgr;	// 컴포넌트 매니저
extern CObjMgr*				g_pObjMgr;			// 오브젝트 매니저

#endif // !__EXTERN_H__
