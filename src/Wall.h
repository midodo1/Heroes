#ifndef WALL_H
#define WALL_H
#include "StaticElement.h"

enum ObstacleTypeID { WATER = 1, 
					  ROC = 2, 
					  CASERNE = 3,
					  BUILING = 4
					 };
	
class Wall : public StaticElement {
	
	protected:
		ObstacleTypeID ObstacleID;
	
	public:
		Wall(ObstacleTypeID id);
		virtual bool isSpace() const;
		ObstacleTypeID getWallTypeID() const;
		void setWallTypeID(ObstacleTypeID id);

};
#endif
