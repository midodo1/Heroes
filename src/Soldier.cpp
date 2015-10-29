#include "Soldier.h"

using namespace std ; 

Soldier::Soldier(){}

bool const Soldier::isHero()
{
	return false;
}

Element::TypeId const Soldier::getTypeId()
{
	return Element::Soldier ;
}



Soldier* const Soldier::clone()
{
	return (new Soldier(*this));
}	

string const Soldier::getMyHero()
{
	return myHero;
}

void Soldier::setMyHero(string name)
{
		this->myHero = name ;
}
