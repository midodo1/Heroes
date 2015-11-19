#ifndef DEF_ACTION
#define DEF_ACTION
#include <string>
#include <iostream>
#include <vector>
#include "ElementList.h"
#include "State.h"




class Action{
	
		public:
		
			Action();
			
			void apply(State& s,bool notify);
			
			void undo(State& s,bool notify);	
		
};

#endif
