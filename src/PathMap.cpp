/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "PathMap.h"


using namespace std;

PathMap::PathMap(const State& st) : state(st), width(0), height(0){
	
	weights = new int[width*height];
}
PathMap::~PathMap(){
	
	delete(this->weights);
}


void PathMap::addElement(Element* element){
	
	elements.push_back(element);
}
int PathMap::getWidth() const{
	
	return this->width;
}
int PathMap::getHeight() const{
	
	return this->height;
}
int* PathMap::getWeights() const{
	
	return weights;
}
int PathMap::getMetadata(int x, int y) const{
	
	return weights[x*width + y]; 
}
int PathMap::getMetadata(int x, int y, Direction direction) const{
	
	Coords coords(x, y, direction);
	
	return weights[coords.x*width + coords.y]; 
}
void PathMap::setMetadata(int x, int y, int value){

	weights[x*width + y] = value;
}
void PathMap::setMetadata(int x, int y, int value, Direction direction){

	Coords coords(x, y, direction);

	weights[coords.x*width + coords.y] = value;
}
void PathMap::initMetadata(int defaultValue){
	
	for(int i=0; i<height*width; i++){
			
		weights[i] = defaultValue;
	}
}
bool PathMap::isValid(int x, int y) const{
	
	if(x < height && x >= 0 && y < width && y >= 0){
	
		return true;
	}
	return false;
}
bool PathMap::isValid(int x, int y, Direction direction) const{

	Coords coords(x, y, direction);
	
	if(coords.x < height && coords.x >= 0 && coords.y < width && coords.y >= 0){
		return true;
	}
}
int PathMap::relax (int x, int y, Direction direction){
	
	Coords coords(x, y, direction);
	int i = coords.x;
	int j = coords.y;

	int a = getMetadata(x ,y);
	int b = getMetadata(x, y, direction);
	if((a+1) < b) {
		setMetadata(x, y, a+1, direction);
		return a+1;
	}
	return 0;
}
void PathMap::dijsktra(){
	
	initMetadata(999);
	
	if(!elements.empty()){
		
		std::priority_queue<Coords> todo;
		
		for (Element* element : elements){
			int x = element->getX();
			int y = element->getY();
			setMetadata(x, y, 0);
			todo.push(Coords(x, y));
		}

		while(!todo.empty()) {

			Coords coords = todo.top();
			todo.pop();
			int i = coords.x;
			int j = coords.y;

			for (Direction direction : directions) {

				if(isValid(i, j, direction)) {
					int value = relax (i, j, direction);
					if (value) {
						todo.push(Coords(i, j, direction, value));
					}
				}
			}
		}
	}
}