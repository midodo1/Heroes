#ifndef DEF_AELEMENTALLOC
#define DEF_AELEMENTALLOC
#include <string>
#include <iostream>
#include "Element.h"



class AElementAlloc{
	
		public:
		
			virtual ~AElementAlloc();
			
			virtual Element* newInstance();
						
};

#endif
