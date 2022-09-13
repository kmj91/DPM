#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

struct Transform {
	Transform() : fX{ 0.f }, fY{ 0.f }, fZ{ 0.f }
	{}

	float fX;
	float fY;
	float fZ;
};


#endif // !__STRUCT_H__
