#include"DxLib.h"
#include"InitDxLib.h"

// <summary>
/// dxlib������
/// </summary>
void InitDxLib()
{
    SetGraphMode(screenWidth, screenHeight, 32);//�E�B���h�E�̃T�C�Y�ƃJ���[���[�h�����߂�
    ChangeWindowMode(TRUE);						//�E�B���h�E���[�h�ɂ���
    SetWindowStyleMode(7);						//�ő剻�{�^�������݂���E�C���h�E���[�h�ɕύX

	if (DxLib::DxLib_Init() == -1)return;		//DX���C�u���������������@���s�����璼���ɏI��

    // �T�C�Y�ύX���\�ɂ���
    SetWindowSizeChangeEnableFlag(TRUE, FALSE);

    // �E�C���h�E�T�C�Y�̓Q�[����ʂƈ�v������
    SetWindowSize(screenWidth, screenHeight);

    SetMainWindowText("gamename");              //�E�B���h�E�i�����Ƃ���j�ɃQ�[����������
    SetDrawScreen(DX_SCREEN_BACK);		        //�w�i���Z�b�g����
}