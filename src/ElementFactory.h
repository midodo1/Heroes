#ifndef DEF_ELEMENTFACTORY
#define DEF_ELEMENTFACTORY
#include <string>
#include <iostream>
#include <map>
#include <iterator>
#include "AElementAlloc.h"
#include "Element.h"





class ElementFactory{
	
		public:
		
			~ElementFactory();
			
			Element* const newInstance(char id);
			
			void registerType(char id,AElementAlloc* a);
			
		protected:
		
			std::map<char,AElementAlloc*> list ;
};

#endif

