#include "ListEvent.h"

using namespace std ;

ListEvent::ListEvent(ElementList& list , int idx):StateEvent(list.getState(),LIST_CHANGED) , list(list), idx(idx)
{
}

