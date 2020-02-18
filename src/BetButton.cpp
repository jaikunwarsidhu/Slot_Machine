#include "Game.h"
#include "BetButton.h"

BetButton::BetButton()

	:Button(
		"../Assets/textures/bet.png",
		"bet",
		BET_BUTTON, glm::vec2(675, 734.0f)), m_isClicked(false)
{
}
BetButton::~BetButton()
{
}

bool BetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Bet Button Clicked!" << std::endl;
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}

int BetButton::countsClickOnce()
{
	return 0;
}

void BetButton::setClickOnce(int clickCount)
{
}
