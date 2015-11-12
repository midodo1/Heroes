#include "MoveCharacter.h"

using namespace std ; 

MoveCharacter(int idx):idx(idx) , dx(0),dy(0),previousDirection(NONE),newDirection(NONE){}
				
void MoveCharacter::setCoords(int dx , int dy , int dpos)
{
 this->dx = dx;

 this->dy = dy;

 this->idx = dpos;

}
				
void MoveCharacter::setDirection(Element::Direction prev, Element::Direction next)
{
	 this->previousDirection = prev;
	 
	  this->newDirection = next;
}
