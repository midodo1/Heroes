#ifndef DEF_STATICELEMENT
#define DEF_STATICELEMENT
#include <string>
#include <iostream>
#include "Element.h"

class StaticElement : public Element{
	
	public:
	
			bool const isStatic();
			virtual bool const isSpace();
	
};


#endif
