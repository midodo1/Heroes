#ifndef DEF_STATEVENT
#define DEF_STATEVENT
#include <string>
#include <iostream>
#include <vector>
#include "State.h"



enum  StateEventID
					{
						ALL_CHANGED = 1,
						PDV_CHANGED = 2,
						LIST_CHANGED = 3,
					};

class State;

class StateEvent{
	
		public:
		
			const State& state;
			
			StateEvent(const State& state, StateEventID id);
						
			bool const operator==(StateEventID id);
					
			bool const operator!=(StateEventID id);	
			
		protected:
		
			StateEventID id ;
};

#endif
