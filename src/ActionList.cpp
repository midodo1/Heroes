#include "ActionList.h"

using namespace std;

ActionList::ActionList(){}

ActionList::ActionList(State& st,bool notify):s(st),notify(notify){}

			
Action* const ActionList::get(int i)
{
	return this->actions[i];
}
			
void ActionList::apply(){}
			 
void ActionList::undo(){} 
			
void ActionList::add(Action* action)
{

}
			
void ActionList::addApply(Action* action)
{

}
