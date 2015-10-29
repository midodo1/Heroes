#ifndef DEF_STATE
#define DEF_STATE
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "ElementGrid.h"
#include "ElementList.h"




class State:public Observable{
	
		public:
			
				State();
				
				~State();
				
				int const getEpoch();
				
				float const getEpochRate();
				
				const ElementGrid& const getGrid();
				
				ElementGrid& getGrid();
				
				const ElementList& const getChars();
				
				ElementList& getChars();
				 
				void setElementFactory(ElementFactory* f); 
				
				void setEpoch(int time);
				 
				void setEpochRate(float rate); 
				
				void setGrid(const ElementGrid& grid);
				
				void setChars(const ElementList& list);
				
				void loadLevel(const char file_name);
			
		protected:
		
			ElementList chars;
			
			ElementGrid grid;
			
			int epoch;
			
			float epochRate;
			
						
};

#endif
