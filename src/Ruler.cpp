#include "Ruler.h"

using namespace std;


Ruler::Ruler(CommandSet& commandSet, State& state) : commands(commandSet), currentState(state), actions(state)
{
	
}

Ruler::~Ruler()
{
		
}

void Ruler::apply()
{

	
}
