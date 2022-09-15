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

	// ������Ʈ ����
	for (int iCnt = 0; iCnt < comSeq::END; ++iCnt) {
		auto iter = _copy.m_arrComponentList[iCnt].begin();
		auto iterEnd = _copy.m_arrComponentList[iCnt].end();
		while (iter != iterEnd) {
			pCopyComponent = (*iter)->Clone();
			m_arrComponentList[iCnt].emplace_back(pCopyComponent);
			// ��ġ ���� ������Ʈ�� ��� ������ ����
			if (pCopyComponent->GetComTag() == comTag::TRANSFORM) {
				m_pTransform = static_cast<CTransform*>(pCopyComponent);
			}
			++iter;
		}
	}
}

bool CBaseObj::AddComponent(comSeq _enComSeq, CComponent* _pComponent)
{
	// ����
	if (_pComponent == nullptr || _enComSeq == comSeq::END) {
		return false;
	}
	// ��ġ ���� ������Ʈ�� ���
	if (_pComponent->GetComTag() == comTag::TRANSFORM) {
		// ��ġ ���� ������Ʈ�� CBaseObj ��� ������ ����
		if (m_pTransform == nullptr) {
			m_pTransform = static_cast<CTransform*>(_pComponent);
		}
		// 2�� �̻��̸� �ȵ� ����
		else {
			return false;
		}
	}
	// ������Ʈ �߰�
	m_arrComponentList[_enComSeq].emplace_back(_pComponent);

	return true;
}
