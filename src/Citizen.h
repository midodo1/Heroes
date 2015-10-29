#ifndef DEF_CITIZEN
#define DEF_CITIZEN
#include <string>
#include <iostream>
#include "MobileElement.h"

class Citizen : public MobileElement{
	
	public:
			Citizen();
			
			bool const isHero();
			
			Element::TypeId const getTypeId(); 
			
			Citizen* const clone();
			
			std::string const getMyHero();
			
			void setMyHero(std::string name);
	
	protected:
			
			std::string myHero ;
	
};


#endif
