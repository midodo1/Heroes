#ifndef WALL_H
#define WALL_H
#include "staticElement.h"

enum ObstacleTypeID { WATER = 1, 
					  ROC = 2, 
					  CASERNE = 3,
					  BUILING = 4
					 };
	
class Wall : public StaticElement {
	
	protected:
		WallTypeID WallID;
	
	public:
		Wall(WallTypeID id);
		virtual bool isSpace() const;
		WallTypeID getWallTypeID() const;
		void setWallTypeID(WallTypeID id);

};
#endif
