#include "Observable.h"

using namespace std ; 

Observable::~Observable(){}

void const Observable::registerObserver(StateObserver* o)
{
	 if (std::find(this->observers.begin(), this->observers.end(), o) == this->observers.end())
        {
            this->observers.push_back(o);
        }
}

void const Observable::unregisterObserver(StateObserver* o)
{
		std::vector<StateObserver*>::iterator it = std::find(this->observers.begin(), this->observers.end(), o);
        if (it != this->observers.end())
        {
            *it = NULL;
            //_eraseQueue.push(it);
        }
}

void const Observable::notifyObservers(const StateEvent& stateEvent)
{
	
	for(std::vector<StateObserver*>::iterator observer = observers.begin(); observer != observers.end(); observer++)
	{
		(*observer)->stateChanged(stateEvent);
	}
}
