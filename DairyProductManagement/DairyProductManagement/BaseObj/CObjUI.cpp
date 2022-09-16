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

	// ������Ʈ �߰�
	// ��Ʈ Ʈ������
	CComponent* pComponent = g_pComponentMgr->CloneComponent(L"RectTransform");
	if (pComponent != nullptr) {
		AddComponent(pComponent->GetComSeq(), pComponent);
	}
}
