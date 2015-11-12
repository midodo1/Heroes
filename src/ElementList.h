#ifndef DEF_ELEMENTLIST
#define DEF_ELEMENTLIST
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "Observable.h"
#include "ElementFactory.h"


class State;

class ElementList:public Observable{
	
		public:
			
				ElementList(State& s);
				
			    State& getState(); 
				
				int const size();
				
				Element* getElement (int i);
				
				void clear();
				
				void setElementFactory(ElementFactory* f);
				
				void setElement(int i,Element* e);
				
				void notifyObservers(int i);
				
		protected:
		
			State& s;
			
			ElementFactory* factory;
			
			std::vector<Element*> elements;
			
						
};

#endif


