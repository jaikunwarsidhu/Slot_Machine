#include "SecondSpin.h"
#include "Game.h"

SecondSpin::SecondSpin()
{
	TheTextureManager::Instance()->load("../Assets/textures/Bar.png",
		"SecondSpinBar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Bell.png",
		"SecondSpinBell", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Cherries.png",
		"SecondSpinCherries", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Melon.png",
		"SecondSpinMelon", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Orange.png",
		"SecondSpinOrange", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/purple.png",
		"SecondSpinpurple", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Seven.png",
		"SecondSpinSeven", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Star.png",
		"SecondSpinStar", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/Lemon'.png",
		"SecondSpinLemon", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("SecondSpinBar");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(473, 455));
	setType(SLOTTWO);
}

SecondSpin::~SecondSpin()
{
}

void SecondSpin::draw()
{

}

void SecondSpin::update()
{
}

void SecondSpin::clean()
{
}

void SecondSpin::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);


}
