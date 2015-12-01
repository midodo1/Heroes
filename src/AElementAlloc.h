#ifndef DEF_AELEMENTALLOC
#define DEF_AELEMENTALLOC
#include <string>
#include <iostream>
#include "Element.h"



class AElementAlloc{
	
		public:
		
			virtual ~AElementAlloc() = 0;
			
			virtual Element* newInstance() = 0;
						
};

#endif
