#pragma once
#include"singleton.h"

#define winmainSetting	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow									//winmainの引数
#define gameRoopSetting ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0	//ゲームループの引数

class Game : public Singleton<Game>
{
public:
	~Game();

	void update();

private:
	//Singletonのフレンドに宣言してコンストラクタにアクセス許可
	friend class Singleton<Game>;
	Game();
};