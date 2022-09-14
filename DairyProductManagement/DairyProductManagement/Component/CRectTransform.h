// UI 위치 정보

#pragma once

#ifndef __RECTTRANSFORM_H__
#define __RECTTRANSFORM_H__

#include "CTransform.h"

class CRectTransform final :
    public CTransform
{
public:
    explicit CRectTransform();
    virtual ~CRectTransform();

public:
    // CComponent을(를) 통해 상속됨
    virtual void InitalizePrototype() override;
    virtual void Initalize() override;
    virtual CComponent* Clone(void* pArg) override;
    virtual void Update() override;

public:
    float GetWidth() { return m_stSize.fWidth; }
    void SetWidth(float _fWidth) { m_stSize.fWidth = _fWidth; }
    float GetHeight() { return m_stSize.fHeight; }
    void SetHeight(float _fHeight) { m_stSize.fHeight = _fHeight; }
    Size GetSize() { return m_stSize; }
    void SetSize(Size _stSize) { m_stSize = _stSize; }

private:
    Size m_stSize;
};

#endif // !__RECTTRANSFORM_H__

