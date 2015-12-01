#ifndef DEF_STATE
#define DEF_STATE
#include <string>
#include <iostream>
#include <vector>
#include "ElementGrid.h"
#include "ElementList.h"
#include "Observable.h"




class ElementFactory;

class State:public Observable{
	
		public:
			
				State();
				
				ElementGrid& getGrid();
			        
				ElementList& getChars();
			        
				void setElementFactory(ElementFactory* f); 
				
				void setGrid(const ElementGrid& grid);
				
				void setChars(const ElementList& list);
				
				void loadLevel(const char file_name);
                                
			
		protected:
		
			ElementList chars;
			
			ElementGrid grid;
						
};

#endif
