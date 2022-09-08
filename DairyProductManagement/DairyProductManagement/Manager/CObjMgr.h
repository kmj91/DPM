#pragma once

#ifndef __OBJMGR_H__
#define __OBJMGR_H__

class CObjMgr final
{
public:
	explicit CObjMgr();
	~CObjMgr();

public:
	void Update();
	void Late_Update();
	void Render();
	void Release();

public:

};

#endif // !__OBJMGR_H__
