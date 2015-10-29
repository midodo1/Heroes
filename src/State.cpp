#include "State.h"

using namespace std ;

State::State(){}

State::~State(){}

int const State::getEpoch()
{
	return epoch;
}

float const State::getEpochRate()
{
	return epochRate;
}

const ElementGrid& const State::getGrid()
{
		return grid;
} 

ElementGrid& State::getGrid()
{
		return const_cast<ElementGrid&>(static_cast<const State*>(this)->getGrid());
}

const ElementList& const State::getChars
{
	return chars;
}
			
ElementList& State::getChars()
{
	return const_cast<ElementList&>(static_cast<const State*>(this)->getChars());	
}

void State::setElementFactory(ElementFactory* f)
{
	this->list = f->list ;
}

void State::setEpoch(int time)
{
	this->epoch = time;
}

void State::setEpochRate(float rate)
{
	this->epochRate = rate;
}

void State::setGrid(const ElementGrid& grid)
{
	this->grid = grid;
}

void State::setChars(const ElementList& list)
{
	this->chars = list;
}

void State::loadLevel(const char file_name)
{

}


















