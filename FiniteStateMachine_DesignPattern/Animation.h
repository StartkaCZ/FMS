#pragma once

#include "State.h"

class Animation
{
	class State* current;

public:
	Animation();
	~Animation();

	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};

