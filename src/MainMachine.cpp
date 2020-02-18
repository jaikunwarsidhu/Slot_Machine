#include "MainMachine.h"
#include "Game.h"

MainMachine::MainMachine()
{
	TheTextureManager::Instance()->load("../Assets/textures/Machine.jpg",
		"Machine", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Casino Royal");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.5));
	setType(MAIN_MACHINE);
}
MainMachine::~MainMachine()
{
	
}

void MainMachine::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("MainMachine", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);

}
void MainMachine::update()
{

}
void MainMachine::clean()
{

}