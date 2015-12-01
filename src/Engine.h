#ifndef DEF_ENGINE
#define DEF_ENGINE
#include <string>
#include <iostream>
#include <vector>
#include "ActionList.h"
#include "CommandSet.h"
#include "State.h"
#include "ElementFactory.h"

class Command;


class Engine{
	
		public:
		
				State& getState();
				
				void addCommands(Command* cmd);
				
				void takeCommands(CommandSet& commands);
				
		protected:
		
				ElementFactory factory ; 
				
				State currentState ;
				
				CommandSet* currentCommands;
				
		
};

#endif

