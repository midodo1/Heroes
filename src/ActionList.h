#ifndef DEF_ACTIONLIST
#define DEF_ACTIONLIST
#include <string>
#include <iostream>
#include <vector>
#include "Action.h"
#include "State.h"





class ActionList{
	
		public:
		
			ActionList(State& s,bool notify);
			
			int const size();
			
			Action* const get(int i);
			
			void apply();
			 
			void undo(); 
			
			void add(Action* action);
			
			void addApply(Action* action);
		
		protected:
		
			State& s ;
			
			std::vector<Action*> actions ; 
			
			bool notify;
			
		
};

#endif
