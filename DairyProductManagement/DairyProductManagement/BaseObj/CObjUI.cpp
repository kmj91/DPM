#include "framework.h"
#include "CObjUI.h"

CObjUI::CObjUI() : m_listHasObj{}
{
}

CObjUI::~CObjUI()
{
}

CObjUI::CObjUI(CObjUI& _copy) : CBaseObj(_copy)
{
	auto iter = _copy.m_listHasObj.begin();
	auto iterEnd = _copy.m_listHasObj.end();
	for (; iter != iterEnd; ++iter) {
		m_listHasObj.emplace_back((*iter)->Clone());
	}
}

void CObjUI::AddObject(CBaseObj* _hasObject)
{
	if (_hasObject == nullptr) {
		return;
	}

	m_listHasObj.emplace_back(_hasObject);
}
