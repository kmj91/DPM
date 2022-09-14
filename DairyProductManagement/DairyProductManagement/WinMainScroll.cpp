// ������ ���� ����
#include "framework.h"
#include "WinMain.h"

#include "Util/CScreenDib.h"			// ��ũ�� ����
#include "Util/CSpriteDib.h"			// ��������Ʈ ����

#include "Component/CRectTransform.h"	// UI ��ġ ����

#include "BaseObj/CDialogBox.h"			// UI ���̾�α� �ڽ�


CScreenDib *g_pScreenDib;				// ��ũ�� ����
CSpriteDib* g_pSpriteDib;				// ��������Ʈ ����
CComponentMgr* g_pComponentMgr;			// ������Ʈ �Ŵ���
CObjMgr* g_pObjMgr;						// ������Ʈ �Ŵ���

//-------------------------
// ���� �ʱ�ȭ
//-------------------------
void InitMain() {
	// ��ũ�� ����
	g_pScreenDib = new CScreenDib(WINCX, WINCY, 32);
	// ��������Ʈ ����
	g_pSpriteDib = new CSpriteDib(500, 0xff00ff);
	// ������Ʈ �Ŵ���
	g_pComponentMgr = new CComponentMgr();
	// ������Ʈ �Ŵ���
	g_pObjMgr = new CObjMgr();

	//������Ʈ
	CComponent* pCreateCom = new CRectTransform();
	g_pComponentMgr->AddComponentPorototype(L"RectTransform", pCreateCom);

	CBaseObj* pCreateObj = new CDialogBox();
	pCreateObj->Initalize();
}

//-------------------------
// ���� ����
//-------------------------
void ReleaseMain() {
	SAFE_DELETE(g_pScreenDib);
	SAFE_DELETE(g_pSpriteDib);
}

//-------------------------
// ���� ���� ������Ʈ �Լ�
//-------------------------
void MainUpdate() {
	
}