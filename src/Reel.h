#pragma once
#ifndef __MACHINE_REEL__
#define __MACHINE_REEL__

#include "GameObject.h"

class Reel : public GameObject
{

public:

	Reel();
	~Reel();

	void draw() override;
	void update() override;
	void clean() override;

	void spin();
	int getSlotNumber();



private:

	int m_SlotNumber;


};



#endif /*Defined __MACHINE_REEL__ */