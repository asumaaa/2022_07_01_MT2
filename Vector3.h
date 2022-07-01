#pragma once
class Vector3
{
public:
	float x;
	float y;
	float z;

public:
	//コンストラクタ
	Vector3();								//零ベクトルとする
	Vector3(float x, float y, float z);		//x成分、y成分、z成分を指定しての生成

	//ゲッター
	float getX() { return x; }
	float getY() { return y; }
	float getZ() { return z; }

	//メンバ関数
	float length();		//長さを返す
	Vector3& normalize();	//正規化する
	float dot(const Vector3& v);	//内積を返す
	Vector3& cross(const Vector3& v);	//外積を返す

	//単項演算子オーバーロード
	Vector3 operator+() const;
	Vector3 operator-() const;

	//代入演算子オーバーロード
	Vector3& operator+=(const Vector3& v);
	Vector3& operator-=(const Vector3& v);
	Vector3& operator*=(float s);
	Vector3& operator/=(float s);
};

//2項演算子オーバーロード
//いろんな引数のパターンに対応(引数の順序)するため、以下のように準備している
const Vector3 operator+(const Vector3& v1, const Vector3& v2);
const Vector3 operator-(const Vector3& v1, const Vector3& v2);
const Vector3 operator*(const Vector3& v, float s);
const Vector3 operator*(float s, const Vector3& v);
const Vector3 operator/(const Vector3& v,float s);
