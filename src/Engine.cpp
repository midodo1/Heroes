#include "Engine.h"
#include "Ruler.h"

using namespace std ; 

State& Engine::getState()
{
	return currentState;
}
				
void Engine::addCommands(Command* cmd)
{
	currentCommands->set(cmd);
}
				
void takeCommands(CommandSet& commands)
{
       	//Ruler ruler = Ruler(commands.set, commands.levelState);
	
//	ruler.apply();	
}
