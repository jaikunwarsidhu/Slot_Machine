#pragma once
#ifndef __STARTBG__
#define __STARTBG__
#include "DisplayObject.h"

class StartBg : public DisplayObject
{
public:
	StartBg();
	~StartBg();

	void draw() override;
	void update() override;
	void clean() override;
};
#endif