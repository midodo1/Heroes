#ifndef DEF_BUILDING
#define DEF_BUILDING
#include "StaticElement.h"
#include <string>
#include <iostream>



enum BuildingTypeId
	{
		CASERNE=0,
		SAUVEGARDE=1,
		TEMPLE=2,
		USINE=3,		
	};



class Building : public StaticElement{
	
		public:
		
			Building();
			
			bool const isGrass();
			
			Element::TypeId const getTypeId(); 
			
			Building* const clone();
			
			
			
};

#endif
