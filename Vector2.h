#pragma once
class Vector2
{
private:
	float x;
	float y;
public:
	//コンストラクタ
	Vector2();					//零ベクトルとして生成
	Vector2(float x,float y);	//x成分、y成分を指定しての生成

	//ゲッター
	float getX() { return x; }
	float getY() { return y; }

	//メンバ関数
	float length();					//長さを返す
	Vector2 normalize();			//正規化
	float dot(const Vector2& v);	//内積を返す
	float cross(const Vector2& v);	//外積を返す

	//単項演算子オーバーロード
};

