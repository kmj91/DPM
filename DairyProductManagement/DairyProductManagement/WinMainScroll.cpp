// ������ ���� ����
#include "framework.h"
#include "WinMain.h"

#include "CScreenDib.h"		// ��ũ�� ����
#include "CSpriteDib.h"		// ��������Ʈ ����


CScreenDib *g_pScreenDib;
CSpriteDib* g_pSpriteDib;

//-------------------------
// ���� �ʱ�ȭ
//-------------------------
void InitMain() {
	// ��ũ�� ����
	g_pScreenDib = new CScreenDib(WINCX, WINCY, 32);
	// ��������Ʈ ����
	g_pSpriteDib = new CScreenDib(500, 0xff00ff);
}

//-------------------------
// ���� ���� ������Ʈ �Լ�
//-------------------------
void MainUpdate() {

}