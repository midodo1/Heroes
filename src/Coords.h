/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coords.h
 * Author: jack
 *
 * Created on December 3, 2015, 4:10 PM
 */

#ifndef COORDS_H
#define COORDS_H

#include "Element.h"
#include <string>

class Coords {

	public:
		int x;
		int y;
		int value;
		
		Coords(int x, int y);
		Coords(int x, int y, Direction direction);
		Coords(int x, int y, Direction direction, int value);
		bool operator<(const Coords& coords) const;
};

#endif /* COORDS_H */

