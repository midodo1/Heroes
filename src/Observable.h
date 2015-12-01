#ifndef DEF_OBSERVABLE
#define DEF_OBSERVABLE
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> 
//#include "Element.h"
//#include "StateObserver.h"

class StateObserver;
class StateEvent;

class Observable{
	
		public:
		
			~Observable();
			
			void const registerObserver(StateObserver* o);
			
			void const unregisterObserver(StateObserver* o);
			
			void const notifyObservers(const StateEvent& stateEvent);
			
		protected:
		
			mutable std::vector<StateObserver*> observers ;
						
};

#endif
