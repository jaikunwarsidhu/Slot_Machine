#include "ThirdSpin.h"
#include "Game.h"

ThirdSpin::ThirdSpin()
{
	TheTextureManager::Instance()->load("../Assets/textures/Bar.png",
		"ThirdSpinBar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Bell.png",
		"ThirdSpinBell", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Cherries.png",
		"ThirdSpinCherries", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Melon.png",
		"ThirdSpinMelon", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Orange.png",
		"ThirdSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/purple.png",
		"ThirdSpinpurple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Seven.png",
		"ThirdSpinSeven", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Star.png",
		"ThirdSpinStar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Lemon'.png",
		"ThirdSpinLemon", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("SecondSpinBar");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(650, 455));
	setType(SLOTTHREE);
}

ThirdSpin::~ThirdSpin()
{
}

void ThirdSpin::draw()
{
}

void ThirdSpin::update()
{
}

void ThirdSpin::clean()
{
}

void ThirdSpin::draw(std::string imageID)
{
}
