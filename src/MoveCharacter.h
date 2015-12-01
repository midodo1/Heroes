#ifndef DEF_MOVECHARACTER
#define DEF_MOVECHARACTER
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "Action.h"




class MoveCharacter:public Action{
	
		public:
		
				MoveCharacter(int idx);
				
				void setCoords(int dx , int dy , int dpos);
				
				void setDirection(Direction prev, Direction next);
				
		protected:
		
			int idx;
			
			int dx;
			
			int dy;
		
			Direction previousDirection;
			
			Direction newDirection;
		
};

#endif
