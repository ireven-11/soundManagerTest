#include"DxLib.h"
#include"InitDxLib.h"

// <summary>
/// dxlib初期化
/// </summary>
void InitDxLib()
{
    SetGraphMode(screenWidth, screenHeight, 32);//ウィンドウのサイズとカラーモードを決める
    ChangeWindowMode(TRUE);						//ウィンドウモードにする
    SetWindowStyleMode(7);						//最大化ボタンが存在するウインドウモードに変更

	if (DxLib::DxLib_Init() == -1)return;		//DXライブラリ初期化処理　失敗したら直ちに終了

    // サイズ変更を可能にする
    SetWindowSizeChangeEnableFlag(TRUE, FALSE);

    // ウインドウサイズはゲーム画面と一致させる
    SetWindowSize(screenWidth, screenHeight);

    SetMainWindowText("gamename");              //ウィンドウ（白いところ）にゲーム名を書く
    SetDrawScreen(DX_SCREEN_BACK);		        //背景をセットする
}