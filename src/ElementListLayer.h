#ifndef DEF_ELEMENTLISTLAYER
#define DEF_ELEMENTLISTLAYER
#include <string>
#include <iostream>
#include <vector>
#include "Layer.h"
#include "State.h"
//#include "StateEvent.h"
#include "StateObserver.h"
#include "ListEvent.h"

class StateEvent;


class ElementListLayer:public Layer{
	
		public:
		
				void stateChanged(const StateEvent& e);
		
};

#endif

