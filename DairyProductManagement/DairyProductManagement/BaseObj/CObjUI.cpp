#include "framework.h"
#include "CObjUI.h"

CObjUI::CObjUI() : m_listHasObj{}
{
}

CObjUI::~CObjUI()
{
}

void CObjUI::AddObject(CBaseObj* _hasObject)
{
	if (_hasObject == nullptr) {
		return;
	}

	m_listHasObj.emplace_back(_hasObject);
}
