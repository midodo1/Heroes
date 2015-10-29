#include "Element.h"

using namespace std;




Element::Element() : x(0) , y(0) , orientation(NONE)
{
	
}

Element::Element(int a ,int b , Element::Direction dir) : x(a) , y(b) , orientation(dir)
{
	
}

Element::TypeId const Element::getTypeId()
{
	return Element::Grass ;
}



bool const Element::isStatic()
{
		return false;
}

Element* const Element::clone()
{
	return (new Element(*this));
}



bool const Element::equals(const Element& other)
{
	if(other.x == this->x && other.y == this->y && other.orientation == this->orientation) 
    {
        return true ; 
    }
    else
    {
		return false ;
	}
	 
}

int const Element::getX()
{
	return x;
}

int const Element::getY()
{
	return y ;
}

Element::Direction const  Element::getOrientation()
{
		return orientation;
}



void Element::setX(int x){
	
	this->x=x;
}

	
void Element::setY(int y){
	
	this->y=y;
}

void Element::setOrientation(int o)
{
	this->orientation = (Element::Direction) o ;	
}




