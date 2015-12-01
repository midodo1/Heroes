#include "Ruler.h"

using namespace std;


Ruler::Ruler(CommandSet& commandSet, State& state , ActionList ac) : commands(commandSet), currentState(state), actions(ac)
{
	
}

Ruler::~Ruler()
{
		
}

void Ruler::apply()
{

	
}
