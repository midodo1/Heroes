#ifndef DEF_MOVECHARACTER
#define DEF_MOVECHARACTER
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"




class MoveCharacter:public Action{
	
		public:
		
				MoveCharacter(int idx);
				
				void setCoords(int dx , int dy , int dpos);
				
				void setDirection(Element::Direction prev, Element::Direction next);
				
		protected:
		
			int idx;
			
			int dx;
			
			int dy;
		
			Element::Direction previousDirection;
			
			Element::Direction newDirection;
		
};

#endif
