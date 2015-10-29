#ifndef DEF_ELEMENTLIST
#define DEF_ELEMENTLIST
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "State.h"
#include "Observable.h"
#include "ElementFactory.h"




class ElementList:public Observable{
	
		public:
			
				ElementList(State& s);
				
				~ElementList();
				
				const State& const getState(); 
				
				int const size();
				
				Element* const get(int i);
				
				void clear();
				
				void setElementFactory(ElementFactory* f);
				
				void set(int i,Element* e);
				
				void const notifyObservers(int i=-1);
			
		protected:
		
			State& s;
			
			ElementFactory* factory;
			
			std::vector<Element*> elements;
			
						
};

#endif
