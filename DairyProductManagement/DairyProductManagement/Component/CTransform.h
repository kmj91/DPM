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
    float GetAcPosX() { return m_stAcMat.m41; }
    void SetAcPosX(float fPosX) { m_stAcMat.m41 = fPosX; }
    float GetAcPosY() { return m_stAcMat.m42; }
    void SetAcPosY(float fPosY) { m_stAcMat.m42 = fPosY; }
    float GetAcPosZ() { return m_stAcMat.m43; }
    void SetAcPosZ(float fPosZ) { m_stAcMat.m43 = fPosZ; }
    Vector3 GetAcPos() { return Vector3(m_stAcMat.m41, m_stAcMat.m42, m_stAcMat.m43); }
    void SetAcPos(Vector3 _vecPos) { m_stAcMat.m41 = _vecPos.fX; m_stAcMat.m42 = _vecPos.fY; m_stAcMat.m43 = _vecPos.fZ; }

    float GetRcPosX() { return m_stRcMat.m41; }
    void SetRcPosX(float fPosX) { m_stRcMat.m41 = fPosX; }
    float GetRcPosY() { return m_stRcMat.m42; }
    void SetRcPosY(float fPosY) { m_stRcMat.m42 = fPosY; }
    float GetRcPosZ() { return m_stRcMat.m43; }
    void SetRcPosZ(float fPosZ) { m_stRcMat.m43 = fPosZ; }
    Vector3 GetRcPos() { return Vector3(m_stRcMat.m41, m_stRcMat.m42, m_stRcMat.m43); }
    void SetRcPos(Vector3 _vecPos) { m_stRcMat.m41 = _vecPos.fX; m_stRcMat.m42 = _vecPos.fY; m_stRcMat.m43 = _vecPos.fZ; }
    
private:
    Matrix m_stAcMat;       // 절대 좌표
    Matrix m_stRcMat;       // 상대 좌표

public:
    CBaseObj* m_pObject;    // 자신 오브젝트
    CTransform* m_pParent;	// 상위 오브젝트 트랜스폼
};

#endif // !__TRANSFORM_H__

