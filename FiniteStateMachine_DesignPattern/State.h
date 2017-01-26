#pragma once

#include "Animation.h"

#include <iostream>

class Animation;

class State
{
public:
	State();
	~State();

	virtual void idle(Animation* a);
	virtual void jumping(Animation* a);
	virtual void climbing(Animation* a);
};

