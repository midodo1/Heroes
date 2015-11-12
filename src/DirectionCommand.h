#ifndef DEF_DIRECTIONCOMMAND
#define DEF_DIRECTIONCOMMAND
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"





class DirectionCommand : public Command {
	
		public:
		
				DirectionCommand(int c, Element::Direction s);
				
				int const getCategory();
				
				CommandTypeID const getTypeID();
				
				int const getCharacter();
				
				Direction getDirection();
				
		protected:
		
				Element::Direction direction;
				
				int character;
		
};

#endif
