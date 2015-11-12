#ifndef DEF_LISTEVENT
#define DEF_LISTEVENT
#include <string>
#include <iostream>
#include <vector>
#include "StateEvent.h"
#include "ElementList.h"



class ListEvent : public StateEvent {
	
		public:
		
			const ElementList& list;
			
			int idx;
			
			ListEvent(ElementList& list , int idx);
			
	
						
};

#endif
