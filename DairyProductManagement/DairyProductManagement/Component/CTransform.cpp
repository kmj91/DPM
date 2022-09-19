#include "framework.h"
#include "CTransform.h"

CTransform::CTransform() : m_stAcMat{ Matrix::Identity() }, m_stRcMat{ Matrix::Identity() }, m_pObject{ nullptr }, m_pParent{ nullptr }
{
}

CTransform::~CTransform()
{
}

void CTransform::InitalizePrototype()
{
}

void CTransform::Initalize()
{
}

CComponent* CTransform::Clone(Arg* pArg)
{
	return nullptr;
}

void CTransform::Update()
{
}
