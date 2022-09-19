#include "framework.h"
#include "CDialogBox.h"

#include "Manager/CComponentMgr.h"
#include "Component/CTransform.h"
#include "Component/CRectTransform.h"


CDialogBox::CDialogBox()
{
}

CDialogBox::~CDialogBox()
{
}

CDialogBox::CDialogBox(CDialogBox& _copy) : super(_copy)
{

}

void CDialogBox::InitalizePrototype()
{
	super::InitalizePrototype();
}

void CDialogBox::Initalize(Arg* pArg)
{
	if (pArg == nullptr) {
		return;
	}

	// 가변 초기화
	auto iter = pArg->umapArg.begin();
	auto iterEnd = pArg->umapArg.end();
	while (iter != iterEnd) {
		switch (iter->first)
		{
			// 절대 좌표 초기화
		case argType::AC_POSITION:
			m_pTransform->SetAcPos(iter->second.vec3Vlaue);
			break;
			// 상대 좌표 초기화
		case argType::RC_POSITION:
			m_pTransform->SetRcPos(iter->second.vec3Vlaue);
			break;
			// 사이즈 초기화
		case argType::SIZE:
			static_cast<CRectTransform*>(m_pTransform)->SetSize(iter->second.sizeVlaue);
			break;
		default:
			break;
		}
		++iter;
	}
}

void CDialogBox::Release()
{
}

CBaseObj* CDialogBox::Clone(Arg* pArg)
{
	CDialogBox* pClone = new CDialogBox(*this);
	pClone->Initalize(pArg);

	return pClone;
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
	g_pSpriteDib->DrawBackground(0xffffff, m_pTransform->GetAcPosX(), m_pTransform->GetAcPosY(), static_cast<CRectTransform*>(m_pTransform)->GetWidth(), static_cast<CRectTransform*>(m_pTransform)->GetHeight(),
		g_pScreenDib->GetDibBuffer(), g_pScreenDib->GetWidth(), g_pScreenDib->GetHeight(), g_pScreenDib->GetPitch(), 0.5, false, false);
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
