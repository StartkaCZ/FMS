#pragma once

#include "State.h"

class Animation
{
public:
	Animation();
	~Animation();

	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();

private:
	State* current;
};

