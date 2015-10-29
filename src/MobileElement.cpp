#include "MobileElement.h"

using namespace std ; 

MobileElement::MobileElement():speed(0),position(0),lifePoint(0)
{
	
}

MobileElement::MobileElement(int a ,int b , Element::Direction dir,int s,int p,int l) 
{
	this->x = a ;
	this->y = b ;
	this->orientation = dir ;
	this->speed = s ;
	this->position = p ;
	this->lifePoint = l ;
}


bool const MobileElement::equals(const MobileElement& other)
{	
	return (other.x == this->x && other.y == this->y && other.orientation == this->orientation && other.speed == this->speed && other.position == this->position && other.lifePoint == this->lifePoint);
}

bool  const MobileElement::isStatic()
{
	return false ;
}

bool const MobileElement::isHero()
{
	return false;
}

Element::Direction const MobileElement::getDirection()
{
		return orientation;
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

void MobileElement::setDirection(int o)
{
	this->orientation = (Element::Direction) o ;	
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
	
	
	
	
	
	





