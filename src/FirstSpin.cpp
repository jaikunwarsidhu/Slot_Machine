#include "FirstSpin.h"
#include "Game.h"

FirstSpin::FirstSpin()
{
	TheTextureManager::Instance()->load("../Assets/textures/Bar.png",
		"FirstSpinBar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Bell.png",
		"FirstSpinBell", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Cherries.png",
		"FirstSpinCherries", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Melon.png",
		"FirstSpinMelon", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Orange.png",
		"FirstSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/purple.png",
		"FirstSpinpurple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Seven.png",
		"FirstSpinSeven", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Star.png",
		"FirstSpinStar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Lemon'.png",
		"FirstSpinLemon", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("LeftSpinCarrot");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(296, 455));
	setType(SLOTONE);
}

FirstSpin::~FirstSpin()
{
}

void FirstSpin::draw()
{
}

void FirstSpin::update()
{
}

void FirstSpin::clean()
{
}

void FirstSpin::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);

}
