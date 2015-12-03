/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Coords.h"



Coords::Coords(int x, int y) : x(x), y(y), value(0){}

Coords::Coords(int x, int y, Direction direction) : value(0){
	
	if(direction == NONE){
		
		this->x = x;
		this->y = y;
	}
	if(direction == NORTH){
		
		this->x = x-1;
		this->y = y;
	}
	if(direction == SOUTH){
		
		this->x = x+1;
		this->y = y;
	}
	if(direction == WEST){
		
		this->x = x;
		this->y = y-1;
	}
	if(direction == EAST){
		
		this->x = x;
		this->y = y+1;
	} 
}

Coords::Coords(int x, int y, Direction direction, int value) : value(value){
	
	if(direction == NONE){
		
		this->x = x;
		this->y = y;
	}
	if(direction == NORTH){
		
		this->x = x-1;
		this->y = y;
	}
	if(direction == SOUTH){
		
		this->x = x+1;
		this->y = y;
	}
	if(direction == WEST){
		
		this->x = x;
		this->y = y-1;
	}
	if(direction == EAST){
		
		this->x = x;
		this->y = y+1;
	}

}

bool Coords::operator<(const Coords& coords) const
{
  return (*this).value < coords.value;
}