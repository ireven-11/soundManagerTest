#pragma once
#include<memory>

class Game
{
public:
	~Game();
	static std::shared_ptr<Game> instance();
	
	void update();

private:
	Game();
};