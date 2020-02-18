#include "Reel.h"
#include "Game.h"
#include <ctime>

Reel::Reel()
{
}

Reel::~Reel()
{
}

void Reel::draw()
{
}

void Reel::update()
{
}

void Reel::clean()
{
}

void Reel::spin()
{
	int spins = (10 + rand() % 50);

	for (int i = 0; i < spins; i++) {

		m_SlotNumber++;
		if (m_SlotNumber > 8)
		{
			m_SlotNumber = 0;
		}
	}
}

int Reel::getSlotNumber()
{
	return m_SlotNumber;
}
