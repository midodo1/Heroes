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
	
	HeroStatus status;
	
	public:
			Hero();
			bool const isHero();
			TypeID const getTypeID(); 
			HeroStatus const getStatus();
			void setStatus(HeroStatus status);
			
};


#endif
