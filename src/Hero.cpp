#include "Hero.h"

using namespace std ; 

Hero::Hero(){}

bool const Hero::isHero()
{
	return true;
}

TypeID const Hero::getTypeID()
{
	return HERO ;
}

HeroStatus const Hero::getStatus()
{
		return status;
}

void Hero::setStatus(HeroStatus status)
{
	this->status = status ;
}
