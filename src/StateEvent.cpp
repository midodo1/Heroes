#include "StateEvent.h"

using namespace std ;

StateEvent::StateEvent(const State& state, StateEventID id) : State(state), id(id){}

bool const StateEvent::operator==(StateEventID id) 
{
	return (this->id == id) ;
}

bool const StateEvent::operator!=(StateEventID id)
{
	return (this->id != id) ; 
}
