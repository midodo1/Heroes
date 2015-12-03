/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PathMap.h
 * Author: jack
 *
 * Created on December 3, 2015, 4:21 PM
 */

#ifndef PATHMAP_H
#define PATHMAP_H

#include "Element.h"
#include "State.h"
#include "Element.h"
#include "MobileElement.h" 
#include "PathMapTarget.h"
#include "Coords.h"
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>





static const std::vector<Direction> directions{NONE, NORTH, SOUTH, EAST, WEST};

class PathMap {

	protected:
		
		const State& state;
		std::vector<Element*> elements;
		int* weights;
		int width;
		int height;
		
	public:
		PathMap(const State& st);
		~PathMap();
		void addElement(Element* element);
		int getWidth() const;
		int getHeight() const;
		int* getWeights() const;
		int getMetadata(int x, int y) const;
		int getMetadata(int x, int y, Direction direction) const;
		void setMetadata(int x, int y, int value);
		void setMetadata(int x, int y, int value, Direction direction);
		void initMetadata(int defaultValue);
		bool isValid(int x, int y) const;
		bool isValid(int x, int y, Direction direction) const;
		int relax (int x, int y, Direction direction);
		void dijsktra();
		void display();
};

#endif /* PATHMAP_H */

