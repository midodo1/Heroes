#include "Wall.h"

Wall::Wall(WallTypeID id) : WallID(id){
	
	this->typeId = WALL;
}
bool Wall::isSpace() const{
	
	return false;
}
WallTypeID Wall::getWallTypeID() const{
	
	return this->WallID;
}
void Wall::setWallTypeID(WallTypeID id){

	this->WallID = id;
}
