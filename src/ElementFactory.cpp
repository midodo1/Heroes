#include "ElementFactory.h"

using namespace std ; 


//std::map<char,AElementAlloc*> ElementFactory::list = std::map<char,AElementAlloc*>();


ElementFactory::~ElementFactory(){}

void ElementFactory::registerType(char id , AElementAlloc* a)
{
		if(list.find(id) == list.end())
        {
               list[id] = a;
        }
}

Element* const ElementFactory::newInstance(char id)
{
		Element* tmp=0;
        std::map<char,AElementAlloc*>::const_iterator it = this->list.find(id);
		if(it != (this->list).end())
        {
			tmp=((*it).second)->newInstance();
        }
        return tmp;
}


