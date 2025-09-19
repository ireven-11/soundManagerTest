#include"DxLib.h"
#include"Game.h"

Game::Game()
{
}

Game::~Game()
{
}

std::shared_ptr<Game> Game::instance()
{
	static std::shared_ptr<Game> instance = std::make_shared<Game>();
	return instance;
}

void Game::update()
{

}