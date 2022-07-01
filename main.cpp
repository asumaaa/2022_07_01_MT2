#include "DxLib.h"
#include "Vector2.h"
#include "Vector3.h"

int DrawCircle(Vector2 vec, int r, unsigned int color);
int DrawLine3D(const Vector3& Pos1, const Vector3& Pos2, const unsigned int color);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	const int WindowWidth = 1024;
	const int WindowHeight = 576;

	ChangeWindowMode(true);
	SetGraphMode(WindowWidth, WindowHeight, 32);
	SetBackgroundColor(0, 0, 64);
	if (DxLib_Init() == -1) return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	//ゲームループで使う変数の宣言
	Vector3 position(400.0f, 400.0f,0.0f);
	Vector3 position2(100.0f, 100.0f,0.0f);

	//ゲームループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		//更新
	/*	position += velocity;*/

		//描画
		DrawLine3D(position, position2, GetColor(255, 255, 255));

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}

int DrawCircle(Vector2 vec, int r, unsigned int color)
{
	return DrawCircle(static_cast<int>(vec.getX()), static_cast<int>(vec.getY()), r, color);
}

int DrawLine3D(const Vector3& Pos1, const Vector3& Pos2, const unsigned int color)
{
	VECTOR p1 = { Pos1.x , Pos1.y,Pos1.z };
	VECTOR p2 = { Pos2.x , Pos2.y,Pos2.z};

	return DrawLine3D(p1, p2, color);
}