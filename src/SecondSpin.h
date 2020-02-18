#pragma once
#ifndef __SECONDSPIN__
#define __SECONDSPIN__


#include "DisplayObject.h"

class SecondSpin : public DisplayObject
{
public:
	SecondSpin();
	~SecondSpin();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif