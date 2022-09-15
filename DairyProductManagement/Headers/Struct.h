#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

// 4 x 4 행렬 매트릭스
struct Matrix {
	explicit Matrix()
		: m11{0.f}, m12{0.f}, m13{ 0.f }, m14{ 0.f },
		m21{ 0.f }, m22{ 0.f }, m23{ 0.f }, m24{ 0.f },
		m31{ 0.f }, m32{ 0.f }, m33{ 0.f }, m34{ 0.f },
		m41{ 0.f }, m42{ 0.f }, m43{ 0.f }, m44{ 0.f }
	{}
	explicit Matrix(float _m11, float _m12, float _m13, float _m14,
		float _m21, float _m22, float _m23, float _m24, 
		float _m31, float _m32, float _m33, float _m34, 
		float _m41, float _m42, float _m43, float _m44)
		: m11{ _m11 }, m12{ _m12 }, m13{ _m13 }, m14{ _m14 },
		m21{ _m21 }, m22{ _m22 }, m23{ _m23 }, m24{ _m24 },
		m31{ _m31 }, m32{ _m32 }, m33{ _m33 }, m34{ _m34 },
		m41{ _m41 }, m42{ _m42 }, m43{ _m43 }, m44{ _m44 }
	{}

	static Matrix Identity() {
		return Matrix(1.f, 0.f, 0.f, 0.f,
					  0.f, 1.f, 0.f, 0.f,
			          0.f, 0.f, 1.f, 0.f,
			          0.f, 0.f, 0.f, 1.f);
	}

	float m11, m12, m13, m14;
	float m21, m22, m23, m24;
	float m31, m32, m33, m34;
	float m41, m42, m43, m44;
};

// 벡터3
struct Vector3 {
	explicit Vector3() : fX{ 0.f }, fY{ 0.f }, fZ{ 0.f }
	{}
	explicit Vector3(float fX, float fY, float fZ) : fX{ fX }, fY{ fY }, fZ{ fZ }
	{}

	Vector3 operator+(Vector3& right) {
		fX = fX + right.fX;
		fY = fY + right.fY;
		fZ = fZ + right.fZ;
		return (*this);
	}

	static Vector3 Back() {
		return Vector3(0.f, 0.f, -1.f);
	}
	static Vector3 Down() {
		return Vector3(0.f, -1.f, 0.f);
	}
	static Vector3 Forward() {
		return Vector3(0.f, 0.f, 1.f);
	}
	static Vector3 Left() {
		return Vector3(-1.f, 0.f, 0.f);
	}
	static Vector3 Right() {
		return Vector3(1.f, 0.f, 0.f);
	}
	static Vector3 Up() {
		return Vector3(0.f, 1.f, 0.f);
	}

	float fX;
	float fY;
	float fZ;
};

// 가로 세로 너비
struct Size {
	explicit Size() : fWidth{ 0.f }, fHeight{ 0.f }
	{}
	explicit Size(float _fWidth, float _fHeight) : fWidth{ _fWidth }, fHeight{ _fHeight }
	{}

	float fWidth;
	float fHeight;
};

// 아규먼트 값
union ArgValue {
	ArgValue(Vector3 _vec3Value) : vec3Vlaue{ _vec3Value }
	{}
	ArgValue(Size _sizeValue) : sizeVlaue{ _sizeValue }
	{}

	Vector3 vec3Vlaue;
	Size sizeVlaue;
	float fVlaue;
	int iVlaue;
	WCHAR* wchValue;
};

// 아규먼트 가변 데이터
struct Arg {
	explicit Arg() : umapArg{}
	{}

	unordered_map<ARG_TYPE::TYPE, ArgValue> umapArg;
};

struct Transform {
	explicit Transform() : fX{ 0.f }, fY{ 0.f }, fZ{ 0.f }
	{}

	float fX;
	float fY;
	float fZ;
};


#endif // !__STRUCT_H__
