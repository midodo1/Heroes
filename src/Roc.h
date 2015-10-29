#ifndef DEF_ROC
#define DEF_ROC
#include "StaticElement.h"
#include <string>
#include <iostream>




class Roc : public StaticElement{
	
		public:
		
			Roc();
			
			bool const isGrass();
			
			Element::TypeId const getTypeId(); 
			
			Roc* const clone();
			
			
			
};

#endif
