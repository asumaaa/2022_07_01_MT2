#include "DxLib.h"
#include "Vector2.h"

int DrawCircle(Vector2 vec, int r, unsigned int color);

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
	Vector2 position(10.0f, 100.0f);
	Vector2 velocity(+1.0f, +0.5f);

	//ゲームループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		//更新
		position += velocity;

		//描画
		DrawCircle(position,16,GetColor(128,155,128));

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}

int DrawCircle(Vector2 vec, int r, unsigned int color)
{
	return DrawCircle(static_cast<int>(vec.getX()), static_cast<int>(vec.getY()), r, color);
}