#ifndef DEF_STATEOBSERVER
#define DEF_STATEOBSERVER
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "StateEvent.h"


class StateEvent ;

class StateObserver{
	
		public:
			virtual void stateChanged(const StateEvent&)=0;				
};

#endif
