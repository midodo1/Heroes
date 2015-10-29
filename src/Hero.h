#ifndef DEF_HERO	
#define DEF_HERO
#include <string>
#include <iostream>
#include "MobileElement.h"

enum  HeroStatus
				{
						NORMAL=1,
						WAR=2,
						DEAD=3,
					
				};

class Hero : public MobileElement{
	
	public:
			Hero();
			bool const isHero();
			Element::TypeId const getTypeId(); 
			Hero* const clone();
			
	
};


#endif
