#ifndef DEF_MOBILEELEMENT
#define DEF_MOBILEELEMENT
#include <string>
#include <iostream>
#include "Element.h"

class MobileElement : public Element {
	
	protected : 
		
			int speed;
			
			int position;
			
			int lifePoint;
	
	public:
	
			MobileElement();
			
			bool  const isStatic();
			
			virtual bool const isHero() = 0;
			
			int const getSpeed();
			
			int const getPosition();
			
			int const getLifePoint();
			
			void setSpeed(int speed);
			
			void setPosition(int position);
			
			void setLifePoint(int lifePoint);
			
	
};


#endif
