#ifndef DEF_ENGINE
#define DEF_ENGINE
#include <string>
#include <iostream>
#include <vector>
#include "ActionList.h"
#include "CommandSet.h"
#include "State.h"
#include "AElementFactory.h"




class Engine{
	
		public:
		
				const State& const getState();
				
				void addCommands(Commands* cmd);
				
				void takeCommands(CommandSet& commands);
				
		protected:
		
				AElementFactory factory ; 
				
				State currentState ;
				
				CommandSet* currentCommands;
				
		
};

#endif

