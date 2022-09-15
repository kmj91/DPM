// 일반 오브젝트 위치 정보

#pragma once

#ifndef __TRANSFORM_H__
#define __TRANSFORM_H__

#include "CComponent.h"

class CTransform :
    public CComponent
{
public:
    explicit CTransform();
    virtual ~CTransform();

public:
    // CComponent을(를) 통해 상속됨
    virtual void InitalizePrototype() override;
    virtual void Initalize() override;
    virtual CComponent* Clone(Arg* pArg) override;
    virtual void Update() override;

public:
    float GetPosX() { return m_stMat.m41; }
    void SetPosX(float fPosX) { m_stMat.m41 = fPosX; }
    float GetPosY() { return m_stMat.m42; }
    void SetPosY(float fPosY) { m_stMat.m42 = fPosY; }
    float GetPosZ() { return m_stMat.m43; }
    void SetPosZ(float fPosZ) { m_stMat.m43 = fPosZ; }
    Vector3 GetPos() { return Vector3(m_stMat.m41, m_stMat.m42, m_stMat.m43); }
    void SetPos(Vector3 _vecPos) { m_stMat.m41 = _vecPos.fX; m_stMat.m42 = _vecPos.fY; m_stMat.m43 = _vecPos.fZ; }
    
private:
    Matrix m_stMat;
};

#endif // !__TRANSFORM_H__

