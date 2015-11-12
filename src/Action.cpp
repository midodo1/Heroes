#include "Action.h"

using namespace std;

Action::Action(){}

void Action::apply(State& s, bool notify)
{

	notify = true ;
}

void Action::undo(State& s, bool notify)
{

	notify = false ;
}

