#include "framework.h"
#include "CTransform.h"

CTransform::CTransform() : m_stMat{ Matrix::Identity() }
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

CComponent* CTransform::Clone(void* pArg)
{
	return nullptr;
}

void CTransform::Update()
{
}
