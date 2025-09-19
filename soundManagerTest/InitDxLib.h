#pragma once

constexpr int screenWidth	= 1920;
constexpr int screenHeight	= 1080;

#define winmainSetting	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow									//winmain‚Ìˆø”
#define gameRoopSetting ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0	//ƒQ[ƒ€ƒ‹[ƒv‚Ìˆø”

void InitDxLib();