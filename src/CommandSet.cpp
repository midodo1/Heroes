#include "CommandSet.h"

using namespace std ;

CommandSet::CommandSet(){}
				
int const CommandSet::size(){return commands.size();}
				
Command* const CommandSet::get(int category){return commands(category);}
		
void CommandSet::set(Command* cmd){}
				
void CommandSet::take(CommandSet& commands,bool replace){}
