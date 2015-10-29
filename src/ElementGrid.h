#ifndef DEF_ELEMENTGRID
#define DEF_ELEMENTGRID
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "ElementList.h"
#include "State.h"




class ElementGrid:public ElementList{
	
		public:
			
				ElementGrid(State& s);
				
				~State();
				
				getChars; 
				
				setChars;
				
				loadLevel;
			
		protected:
		
			int width;
			
			int height;
			
						
};

#endif
