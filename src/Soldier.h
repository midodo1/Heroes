#ifndef DEF_SOLDIER
#define DEF_SOLDIER
#include <string>
#include <iostream>
#include "MobileElement.h"

class Soldier : public MobileElement{
	
	public:
			Soldier();
			
			bool const isHero();
			
			Element::TypeId const getTypeId(); 
			
			Soldier* const clone();
			
			std::string const getMyHero();
			
			void setMyHero(std::string name);
	
	protected:
			
			std::string myHero ;
	
};


#endif
