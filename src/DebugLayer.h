#ifndef DEF_DEBUGLAYER
#define DEF_DEBUGLAYER
#include <string>
#include <iostream>
#include <vector>
#include "ElementList&.h"
#include "Layer.h"
#include "State.h"
#include "StateEvent.h"
#include "StateObserver.h"



class DebugLayer:public Layer{
	
		public:
		
				stateChanged(const state::StateEvent& e);
					
				void printGridValues(int* values ,int n);				
};

#endif
