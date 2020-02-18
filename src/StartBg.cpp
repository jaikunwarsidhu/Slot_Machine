#include "StartBg.h"
#include "Game.h"

StartBg::StartBg()
{
	TheTextureManager::Instance()->load("../Assets/textures/Casino.jpg",
		"StartBackground", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("StartBg");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.5));
	setType(MAIN_MACHINE);
}

StartBg::~StartBg()
{
}

void StartBg::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("StartBg", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);

}

void StartBg::update()
{
}

void StartBg::clean()
{
}