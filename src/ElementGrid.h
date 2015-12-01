#ifndef DEF_ELEMENTGRID
#define DEF_ELEMENTGRID
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "ElementList.h"


class State;
class Element;


class ElementGrid : public ElementList{
	
		public:
			
				ElementGrid(State & s);
				
				int const getWidth();
				
				int const getHeight();
				
				Element* getCell(int i, int j) const;
                                
                                void setCell(int i, int j, Element* e);
				
				void loadLevel(const char* name);
			
		protected:
		
			int width;
			
			int height;
			
						
};

#endif
