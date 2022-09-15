#include "framework.h"
#include "CBaseObj.h"

#include "Component/CTransform.h"

CBaseObj::CBaseObj() : m_objSeq{ objSeq::END }, m_arrComponentList{}, m_pTransform{ nullptr }
{
}

CBaseObj::~CBaseObj()
{
}

CBaseObj::CBaseObj(CBaseObj& _copy) : m_objSeq{ _copy.m_objSeq }, m_pTransform{ nullptr }
{
	CComponent* pCopyComponent{nullptr};

	// 컴포넌트 복제
	for (int iCnt = 0; iCnt < comSeq::END; ++iCnt) {
		auto iter = _copy.m_arrComponentList[iCnt].begin();
		auto iterEnd = _copy.m_arrComponentList[iCnt].end();
		while (iter != iterEnd) {
			pCopyComponent = (*iter)->Clone();
			m_arrComponentList[iCnt].emplace_back(pCopyComponent);
			// 위치 정보 컴포넌트면 멤버 변수로 저장
			if (pCopyComponent->GetComTag() == comTag::TRANSFORM) {
				m_pTransform = static_cast<CTransform*>(pCopyComponent);
			}
			++iter;
		}
	}
}

bool CBaseObj::AddComponent(comSeq _enComSeq, CComponent* _pComponent)
{
	// 예외
	if (_pComponent == nullptr || _enComSeq == comSeq::END) {
		return false;
	}
	// 위치 정보 컴포넌트의 경우
	if (_pComponent->GetComTag() == comTag::TRANSFORM) {
		// 위치 정보 컴포넌트는 CBaseObj 멤버 변수에 저장
		if (m_pTransform == nullptr) {
			m_pTransform = static_cast<CTransform*>(_pComponent);
		}
		// 2개 이상이면 안됨 예외
		else {
			return false;
		}
	}
	// 컴포넌트 추가
	m_arrComponentList[_enComSeq].emplace_back(_pComponent);

	return true;
}
