#ifndef DEF_ELEMENTALLOC
#define DEF_ELEMENTALLOC
#include <string>
#include <iostream>
#include "AElementAlloc.h"


template <typename ID , class E> class ElementAlloc : public AElementAlloc{
	
		public:
		
			ElementAlloc(ID id);
			
			Element* newInstance();
						
		protected :
		
			ID id ;
				
};

#endif
