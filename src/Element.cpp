#include "Element.h"

using namespace std;




Element::Element() : x(0) , y(0) , orientation(NONE) , typeID(SPACE)
{
	
}

TypeID const Element::getTypeID()
{
	return typeID ;
}


int const Element::getX()
{
	return x;
}

int const Element::getY()
{
	return y ;
}


Direction const  Element::getDirection()
{
		return orientation;
}



void Element::setX(int x){
	
	this->x=x;
}

	
void Element::setY(int y){
	
	this->y=y;
}

void Element::setDirection(Direction orientation)
{
	this->orientation = orientation ;	
}



