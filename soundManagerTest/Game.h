#pragma once
#include"singleton.h"

#define winmainSetting	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow									//winmain�̈���
#define gameRoopSetting ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0	//�Q�[�����[�v�̈���

class Game : public Singleton<Game>
{
public:
	~Game();

	void update();

private:
	//Singleton�̃t�����h�ɐ錾���ăR���X�g���N�^�ɃA�N�Z�X����
	friend class Singleton<Game>;
	Game();
};