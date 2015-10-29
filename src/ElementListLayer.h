#ifndef DEF_ELEMENTLISTLAYER
#define DEF_ELEMENTLISTLAYER
#include <string>
#include <iostream>
#include <vector>
#include "ElementList&.h"
#include "Layer.h"
#include "State.h"
#include "StateEvent.h"
#include "StateObserver.h"



class ElementListLayer:public Layer{
	
		public:
		
				void stateChanged(const state::StateEvent& e);
			
};

#endif
