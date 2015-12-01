#include "ElementList.h"
#include "ListEvent.h"
#include "State.h"

using namespace std ;

ElementList::ElementList(State& State): s(State){}

State& ElementList::getState()
{
	
	return s;
}

int ElementList::size() const
{
	return elements.size();
}

Element* ElementList::getElement(int i) 
{
	return elements[i];
}

void ElementList::clear()
{
	elements.clear();
}

void ElementList::setElementFactory(ElementFactory* f)
{
	this->factory = f;
}

void ElementList::setElement(int i, Element* element)
{

	std::vector<Element*>::iterator it = elements.begin();
	elements.insert (it+i,element);
}

void ElementList::notifyObservers(int i)
{
	
	ListEvent ListEvent(*this,i) ;
	Observable::notifyObservers(ListEvent);
}
