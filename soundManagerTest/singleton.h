#pragma once
#include<memory>

template <typename T>
class Singleton
{
public:
	static T& instance()
	{
		//std::make_unique�̎�����AGame�N���X�̊O���֐��i���C�u�����R�[�h�j����new T()���Ăяo��
		//�O������Ăяo�����Ƃ�Game�N���X��private�R���X�g���N�^�ɃA�N�Z�X�ł��Ȃ����߃G���[�ɂȂ�
		//make_unique������d�l�Ŏg���Ȃ��̂ő���Ɏw�肵���^(�����ł���new T()�̕���)�̃|�C���^�����邱�Ƃŉ�������
		static std::unique_ptr<T> instance = std::unique_ptr<T>(new T());
		return *instance;
	}

private:

protected:
	Singleton() {};
	~Singleton() {};
	Singleton(const Singleton&)				= delete;	//�R�s�[�֎~
	Singleton& operator=(const Singleton&)	= delete;	//����֎~
};