// UI ���̾�α� �ڽ�

#pragma once

#ifndef __DIALOGBOX_H__
#define __DIALOGBOX_H__

#include "CObjUI.h"

class CDialogBox final :
    public CObjUI
{
public:
    explicit CDialogBox();
    virtual ~CDialogBox();

    CDialogBox(CDialogBox& _copy);

public:
    // CBaseObj��(��) ���� ��ӵ�
    virtual void InitalizePrototype() override;
    virtual void Initalize(Arg* pArg = nullptr) override;
    virtual void Release() override;
    virtual CBaseObj* Clone(Arg* pArg = nullptr) override;
    virtual void Input() override;
    virtual void Update() override;
    virtual void LateUpdate() override;
    virtual void Render() override;
    virtual void Click(mk enMk) override;

    // CObjUI��(��) ���� ��ӵ�
    virtual void Move(Vector3 _vecMovePos) override;
    virtual void Cloase() override;
    virtual void Show() override;
    virtual void Hide() override;


};

#endif // !__DIALOGBOX_H__

