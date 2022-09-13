#pragma once

#ifndef __TRANSFORM_H__
#define __TRANSFORM_H__

#include "CComponent.h"

class CTransform final :
    public CComponent
{
public:
    explicit CTransform();
    virtual ~CTransform();

public:
    // CComponent을(를) 통해 상속됨
    virtual void InitalizePrototype() override;
    virtual void Initalize() override;
    virtual CComponent* Clone(void* pArg) override;
    virtual void Update() override;

public:


private:
    Transform m_stTransform;
};

#endif // !__TRANSFORM_H__

