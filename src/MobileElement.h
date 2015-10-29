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
			
			MobileElement(int a,int b,Element::Direction dir,int s,int p,int l);
			
			bool const equals(const MobileElement&);
			
			bool  const isStatic();
			
			virtual bool const isHero();
			
			Direction const getDirection();
			
			int const getSpeed();
			
			int const getPosition();
			
			int const getLifePoint();
			
			void setDirection(int);
			
			void setSpeed(int);
			
			void setPosition(int);
			
			void setLifePoint(int);
			
	
};


#endif
