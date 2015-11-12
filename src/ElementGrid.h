#ifndef DEF_ELEMENTGRID
#define DEF_ELEMENTGRID
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Element.h"
#include "Space.h"
#include "ElementList.h"
#include "State.h"


class ElementGrid:public ElementList {
	
		public:
			
				ElementGrid(State& s);
				
				int const getWidth();
				
				int const getHeight();
				
				Element* getCell(int i, int j) const;
				
				void loadLevel(const char* name);
			
		protected:
		
			int width;
			
			int height;
			
						
};

#endif
