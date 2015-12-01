#include "Space.h"

Space::Space(SpaceTypeID id) : spaceID(id){
	
	this->typeID = SPACE;
}
bool Space::isSpace() const{
	
	return false;
}
SpaceTypeID Space::getSpaceTypeID() const{
	
	return this->spaceID;
}
void Space::setSpaceTypeID(SpaceTypeID id){

	this->spaceID = id;
}
