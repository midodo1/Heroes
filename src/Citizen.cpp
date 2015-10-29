#include "Citizen.h"

using namespace std ; 

Citizen::Citizen(){}

bool const Citizen::isHero()
{
	return false;
}

Element::TypeId const Citizen::getTypeId()
{
	return Element::Citizen ;
}

Citizen* const Citizen::clone()
{
	return (new Citizen(*this));
}	

string const Citizen::getMyHero()
{
	return myHero;
}

void Citizen::setMyHero(string name)
{
		this->myHero = name ;
}
