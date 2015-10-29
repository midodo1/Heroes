#include "Grass.h"

using namespace std ; 

Grass::Grass(){}

bool const Grass::isGrass()
{
	return true;
}

Element::TypeId const Grass::getTypeId()
{
	return Element::Grass;
} 

Grass* const Grass::clone()
{
	return (new Grass(*this));	
}
