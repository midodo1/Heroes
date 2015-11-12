#include "MobileElement.h"

using namespace std ; 

MobileElement::MobileElement():speed(0),position(0),lifePoint(0)
{
	
}


bool  const MobileElement::isStatic()
{
	return false ;
}

int const MobileElement::getSpeed()
{
	return speed;
}

int const MobileElement::getPosition()
{
	return position;
}

int const MobileElement::getLifePoint()
{
	return lifePoint;
}

void MobileElement::setSpeed(int speed)
{
	this->speed = speed;
}

void MobileElement::setPosition(int position)
{
	this->position = position;
}

void MobileElement::setLifePoint(int lifePoint)
{
	this->lifePoint = lifePoint;
}
	
	
	
	
	
	





