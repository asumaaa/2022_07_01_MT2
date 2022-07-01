#include "Vector3.h"
#include <cmath>		//sprt
#include "math.h"

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float Vector3::length()
{
	return sqrt(x * x + y * y + z * z);
}

Vector3& Vector3::normalize()
{
	float len = length();

	this->x /= len;
	this->y /= len;
	this->z /= len;

	return *this;
}

float Vector3::dot(const Vector3& v)
{
	return x * v.x + y * v.y + z * v.z;
}

Vector3& Vector3::cross(const Vector3& v)
{
	this->x = y * v.z - z * v.y;
	this->y = z * v.x - x * v.z;
	this->z = x * v.y - y * v.x;

	return *this;
}

Vector3 Vector3::operator+() const
{
	return *this;
}

Vector3 Vector3::operator-() const
{
	return Vector3(-x,-y,-z);
}

Vector3& Vector3::operator+=(const Vector3& v)
{
	x += v.x;
	y += v.y;
	z += v.z;

	return *this;
}

Vector3& Vector3::operator-=(const Vector3& v)
{
	x -= v.x;
	y -= v.y;
	z -= v.z;

	return *this;
}

Vector3& Vector3::operator*=(float s)
{
	x *= s;
	y *= s;
	z *= s;

	return *this;
}

Vector3& Vector3::operator/=(float s)
{
	x /= s;
	y /= s;
	z /= s;

	return *this;
}

const Vector3 operator+(const Vector3& v1, const Vector3& v2)
{
	Vector3 temp(v1);
	return temp += v2;
}

const Vector3 operator-(const Vector3& v1, const Vector3& v2)
{
	Vector3 temp(v1);
	return temp -= v2;
}

const Vector3 operator*(const Vector3& v, float s)
{
	Vector3 temp(v);
	return temp *= s;
}

const Vector3 operator*(float s, const Vector3& v)
{
	Vector3 temp(v);
	return temp *= s;
}

const Vector3 operator/(const Vector3& v, float s)
{
	Vector3 temp(v);
	return temp /= s;
}
