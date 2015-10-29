#include "Hero.h"

using namespace std ; 

Hero::Hero(){}

bool const Hero::isHero()
{
	return true;
}

Element::TypeId const Hero::getTypeId()
{
	return Element::Hero ;
}


Hero* const Hero::clone()
{
	return (new Hero(*this));
}


