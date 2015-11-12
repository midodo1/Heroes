#ifndef Space_H
#define Space_H
#include "StaticElement.h"

enum SpaceTypeID 
				{ GRASS = 1, 
					
				  GROUND = 2
				};
	
class Space : public StaticElement {
	
	protected:
		SpaceTypeID spaceID;
	
	public:
		Space(SpaceTypeID id);
		virtual bool isSpace() const;
		SpaceTypeID getSpaceTypeID() const;
		void setSpaceTypeID(SpaceTypeID id);

};
#endif
