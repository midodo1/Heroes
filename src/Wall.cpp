#include "Wall.h"

Wall::Wall(ObstacleTypeID id) : ObstacleID(id){
	
	this->typeID = WALL;
}
bool Wall::isSpace() const{
	
	return false;
}
ObstacleTypeID Wall::getWallTypeID() const{
	
	return this->ObstacleID;
}
void Wall::setWallTypeID(ObstacleTypeID id){

	this->ObstacleID = id;
}
