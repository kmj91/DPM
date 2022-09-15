#include "framework.h"
#include "CRectTransform.h"

CRectTransform::CRectTransform() : m_stSize{}
{
}

CRectTransform::~CRectTransform()
{
}

void CRectTransform::InitalizePrototype()
{
    SetComSeq(comSeq::NO_UPDATE);
    SetComTag(comTag::TRANSFORM);
}

void CRectTransform::Initalize()
{
}

CComponent* CRectTransform::Clone(Arg* pArg)
{
    CRectTransform* pClone = new CRectTransform(*this);
    pClone->Initalize();

    return pClone;
}

void CRectTransform::Update()
{
}
