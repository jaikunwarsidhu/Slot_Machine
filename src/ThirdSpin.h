#pragma once
#ifndef __SLOTTHREE__
#define __SLOTTHREE__


#include "DisplayObject.h"

class ThirdSpin : public DisplayObject
{
public:
	ThirdSpin();
	~ThirdSpin();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif