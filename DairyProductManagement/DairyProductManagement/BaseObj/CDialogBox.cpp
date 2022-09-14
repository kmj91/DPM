#include "framework.h"
#include "CDialogBox.h"

#include "Manager/CComponentMgr.h"

CComponentMgr* g_pComponentMgr;			// 컴포넌트 매니저

CDialogBox::CDialogBox()
{
}

CDialogBox::~CDialogBox()
{
}

void CDialogBox::Initalize()
{
	//g_pComponentMgr->CloneComponent();
}

void CDialogBox::Release()
{
}

CBaseObj* CDialogBox::Clone(void* pArg)
{
	return nullptr;
}

void CDialogBox::Input()
{
}

void CDialogBox::Update()
{
}

void CDialogBox::LateUpdate()
{
}

void CDialogBox::Render()
{
}

void CDialogBox::Click(mk enMk)
{
}

void CDialogBox::Move(Vector3 _vecMovePos)
{
}

void CDialogBox::Cloase()
{
}

void CDialogBox::Show()
{
}

void CDialogBox::Hide()
{
}
