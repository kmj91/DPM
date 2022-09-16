#pragma once

#ifndef __EXTERN_H__
#define __EXTERN_H__

#include "Util/CScreenDib.h"			// ��ũ�� ����
#include "Util/CSpriteDib.h"			// ��������Ʈ ����
#include "Manager/CObjMgr.h"			// ������Ʈ �Ŵ���
#include "Manager/CComponentMgr.h"		// ������Ʈ �Ŵ���

extern HWND					g_hWnd;				// ������ �����ڵ�
extern CScreenDib*			g_pScreenDib;		// ��ũ�� ����
extern CSpriteDib*			g_pSpriteDib;		// ��������Ʈ ����
extern CComponentMgr*		g_pComponentMgr;	// ������Ʈ �Ŵ���
extern CObjMgr*				g_pObjMgr;			// ������Ʈ �Ŵ���

#endif // !__EXTERN_H__
