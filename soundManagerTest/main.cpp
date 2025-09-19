#include"DxLib.h"
#include"InitDxLib.h"
#include"Game.h"

int WINAPI WinMain(winmainSetting)
{
    InitDxLib();

    auto game = Game::instance();

    game->update();

    DxLib_End();
    return 0;
}