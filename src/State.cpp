#include "State.h"

using namespace std ;

State::State() : chars(*this) , grid(*this) {}

ElementGrid& State::getGrid()
{
		return grid;
} 

/*const ElementGrid& const State::getGrid()
{
		return const_cast<ElementGrid&>(static_cast<const State*>(this)->getGrid());
}*/

ElementList& State::getChars()
{
	return chars;
}
			
/*ElementList& State::getChars()
{
	return const_cast<ElementList&>(static_cast<const State*>(this)->getChars());	
}*/

void State::setElementFactory(ElementFactory* f)
{	
		chars.setElementFactory(f);
		grid.setElementFactory(f);
}

void State::setGrid(const ElementGrid& grid)
{
	//this->grid = grid;   Utiliser copy , à définir
}

void State::setChars(const ElementList& list)
{
	//this->chars = list;   Utiliser copy , à définir
}

void State::loadLevel(const char file_name)
{
	 //grid.loadLevel((char*)file_name);  à revoir !!
}


















