#pragma once
class Vector2
{
public:
	float x;
	float y;
public:
	//�R���X�g���N�^
	Vector2();					//��x�N�g���Ƃ��Đ���
	Vector2(float x,float y);	//x�����Ay�������w�肵�Ă̐���

	//�Q�b�^�[
	float getX() { return x; }
	float getY() { return y; }

	//�����o�֐�
	float length();					//������Ԃ�
	Vector2& normalize();			//���K��
	float dot(const Vector2& v);	//���ς�Ԃ�
	float cross(const Vector2& v);	//�O�ς�Ԃ�

	//�P�����Z�q�I�[�o�[���[�h
	Vector2 operator+() const;
	Vector2 operator-() const;

	//������Z�q�I�[�o�[���[�h
	Vector2& operator+=(const Vector2& v);
	Vector2& operator-=(const Vector2& v);
	Vector2& operator*=(float s);
	Vector2& operator/=(float s);
};


//2�����Z�q�I�[�o�[���[�h
//�����Ȉ���(�����̌^�Ə���)�̃p�^�[���ɑΉ����邽�߁A�ȉ��̂悤�ɏ������Ă���
const Vector2 operator+(const Vector2& v1, const Vector2& v2); 
const Vector2 operator-(const Vector2& v1, const Vector2& v2); 
const Vector2 operator*(const Vector2& v,float s);
const Vector2 operator*(float s,const Vector2& v);
const Vector2 operator/(const Vector2& v, float s);