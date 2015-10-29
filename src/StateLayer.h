#ifndef DEF_STATELAYER
#define DEF_STATELAYER
#include <string>
#include <iostream>
#include <vector>
#include "ElementList&.h"
#include "Layer.h"
#include "State.h"
#include "StateEvent.h"
#include "StateObserver.h"



class StateLayer:public Layer{
	
		public:
		
				void stateChanged(const state::StateEvent& e);
						
};

#endif
