#include "Building.h"

using namespace std ; 

Building::Building(){}

bool const Building::isGrass()
{
	return false;
}

Element::TypeId const Building::getTypeId()
{
	return Element::Building ;
} 

Building* const Building::clone()
{
	return (new Building(*this));	
}
