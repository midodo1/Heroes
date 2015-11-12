#include "ActionList"

using namespace std;

ActionList()::ActionList(){}

ActionList::ActionList(State& s,bool notify):s(s),notify(notify){}

			
Action* const ActionList()::get(int i){return actions(i);}
			
void ActionList::apply(){}
			 
void ActionList::undo(){} 
			
void ActionList::add(Action* action)
{

}
			
void ActionList::addApply(Action* action)
{

}
