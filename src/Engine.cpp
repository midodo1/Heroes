#include "Engine.h"
#include "Ruler.h"
#include <mutex>
#include <threads>

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
		mutex.lock();
	
       	Ruler ruler = Ruler(commands.set, commands.levelState);
	
		ruler.apply();	
		
		mutex.unlock();
}
