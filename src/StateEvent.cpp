#include "StateEvent.h"

using namespace std ;

StateEvent::StateEvent(const State& State, StateEventID id) : state(State), id(id){}

bool const StateEvent::operator==(StateEventID id) 
{
	return (this->id == id) ;
}

bool const StateEvent::operator!=(StateEventID id)
{
	return (this->id != id) ; 
}
