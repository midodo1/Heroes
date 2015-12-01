#ifndef DEF_COMMANDSET
#define DEF_COMMANDSET
#include <string>
#include <iostream>
#include <vector>
#include "Command.h"
#include <map>




class CommandSet{
	
		public:
		
				CommandSet();
				
				int const size();
				
				Command* const get(int category);
		
				void set(Command* cmd);
				
				void take(CommandSet& commands,bool replace);
				
		 protected:
		 
				std::map<int,Command*> commands;
				
				
};

#endif
