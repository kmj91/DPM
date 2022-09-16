#include "framework.h"
#include "CObjUI.h"

CObjUI::CObjUI()
{
}

CObjUI::~CObjUI()
{
}

CObjUI::CObjUI(CObjUI& _copy) : super(_copy)
{
	
}

void CObjUI::InitalizePrototype()
{
	SetObjSeq(objSeq::UI);

	// 컴포넌트 추가
	// 렉트 트랜스폼
	CComponent* pComponent = g_pComponentMgr->CloneComponent(L"RectTransform");
	if (pComponent != nullptr) {
		AddComponent(pComponent->GetComSeq(), pComponent);
	}
}
