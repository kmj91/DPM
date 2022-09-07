#pragma once

#ifndef __OBJ_H__

class CObj abstract
{
public:
	explicit CObj();
	virtual ~CObj();

public:
	virtual void Initalize() = 0;
	virtual void Update() = 0;
	virtual void Late_Update() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

};

#endif // !__COBJ_H__


