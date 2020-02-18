#pragma once
#ifndef __SLOTONE__
#define __SLOTONE__


#include "DisplayObject.h"

class FirstSpin : public DisplayObject
{
public:
	FirstSpin();
	~FirstSpin();

	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);

};
#endif /*defined (__SLOTONE__) SLOTONE*/
