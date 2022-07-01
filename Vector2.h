#pragma once
class Vector2
{
private:
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
	Vector2 normalize();			//���K��
	float dot(const Vector2& v);	//���ς�Ԃ�
	float cross(const Vector2& v);	//�O�ς�Ԃ�

	//�P�����Z�q�I�[�o�[���[�h
};

