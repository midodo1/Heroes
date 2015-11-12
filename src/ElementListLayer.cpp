#include "ElementListLayer.h"

using namespace std ;

void ElementListLayer::stateChanged(const stateEvent& e){
	
	const ListEvent& ListEvent = static_cast<const ListEvent&>(e);
	update(ListEvent.list, lListEvent.idx);
}


