#include "MoveCharacter.h"

using namespace std ; 

MoveCharacter::MoveCharacter(int index):idx(index), dx(0),dy(0),previousDirection(NONE),newDirection(NONE) {}
				
void MoveCharacter::setCoords(int dx , int dy , int dpos)
{
 this->dx = dx;

 this->dy = dy;

 this->idx = dpos;

}
				
void MoveCharacter::setDirection(Direction prev, Direction next)
{
	 this->previousDirection = prev;
	 
	  this->newDirection = next;
}
