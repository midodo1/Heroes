#include "DirectionCommand.h"
#include "Element.h"

using namespace std;

DirectionCommand::DirectionCommand(int c , Element::Direction s):direction(s),character(c){}

int const DirectionCommand::getCategory(){return 1 ;}

CommandTypeID const DirectionCommand::getTypeID(){return DIRECTION ;}
				
int const DirectionCommand::getCharacter(){return character;}
				
Element::Direction getDirection( ){return direction;}



