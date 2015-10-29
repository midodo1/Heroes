#ifndef DEF_GRASS
#define DEF_GRASS
#include "StaticElement.h"
#include <string>
#include <iostream>




class Grass : public StaticElement{
	
		public:
		
			Grass();
			
			bool const isGrass();
			
			Element::TypeId const getTypeId(); 
			
			Grass* const clone();
			
			
			
};

#endif
