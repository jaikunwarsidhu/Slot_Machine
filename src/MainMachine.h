#pragma once
#ifndef __MAIN_MACHINE__
#define __MAIN_MACHINE__
#include "DisplayObject.h"

class MainMachine : public DisplayObject
{
public:
	MainMachine();
	~MainMachine();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__MAIN_MACHINE__) */