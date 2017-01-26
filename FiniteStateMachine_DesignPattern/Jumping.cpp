#include "Jumping.h"
#include "Idle.h"


Jumping::Jumping()
{

}


Jumping::~Jumping()
{
}

void Jumping::idle(Animation* a)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}