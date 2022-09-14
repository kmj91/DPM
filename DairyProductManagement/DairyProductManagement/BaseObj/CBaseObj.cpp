#include "framework.h"
#include "CBaseObj.h"

CBaseObj::CBaseObj() : m_seq{ objSeq::END }, m_pTransform{ nullptr }
{
}

CBaseObj::~CBaseObj()
{
}
