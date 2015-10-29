#include "Roc.h"

using namespace std ; 

Roc::Roc(){}

bool const Roc::isGrass()
{
	return false;
}

Element::TypeId const Roc::getTypeId()
{
	return Element::Roc;
} 

Roc* const Roc::clone()
{
	return (new Roc(*this));	
}
