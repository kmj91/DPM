#include "framework.h"
#include "CDialogBox.h"

#include "Manager/CComponentMgr.h"
#include "Component/CTransform.h"


CDialogBox::CDialogBox()
{
}

CDialogBox::~CDialogBox()
{
}

CDialogBox::CDialogBox(CDialogBox& _copy) : CObjUI(_copy)
{

}

void CDialogBox::InitalizePrototype()
{
	SetObjSeq(objSeq::UI);

	// 컴포넌트 추가
	// 렉트 트랜스폼
	CComponent* pComponent = g_pComponentMgr->CloneComponent(L"RectTransform");
	if (pComponent != nullptr) {
		AddComponent(pComponent->GetComSeq(), pComponent);
	}
}

void CDialogBox::Initalize(Arg* pArg)
{
	if (pArg == nullptr) {
		return;
	}

	auto iter = pArg->umapArg.begin();
	auto iterEnd = pArg->umapArg.end();
	while (iter != iterEnd) {
		// 가변 초기화 문제
		iter->first;
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
