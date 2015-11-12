#include "Engine.h"

using namespace std ; 

const State& const Engine::getState()
{
	return state;
}
				
void Engine::addCommands(Commands* cmd)
{
	currentCommands.commandSet(cmd);
}
				
void takeCommands(CommandSet& commands)
{
	Ruler ruler(this->commandSet, this->levelState);
	//std::cout << "benoit";
	
	
	/*Appeler les methodes du Ruller pour verifier les commandes*/
	
	
	
	ruler.apply();	
}
