/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeursticAI.h
 * Author: jack
 *
 * Created on December 3, 2015, 3:00 PM
 */

#ifndef HEURSTICAI_H
#define HEURSTICAI_H

#include "DumbAI.h"
#include "PathMap.h"
#include "CommandSet.h"
#include "ElementList.h"
#include "MobileElement.h"
#include "MoveCharacter.h"
#include "Engine.h"
#include <iostream>

class Engine;
class PathMap;
class Element;
	
class HeuristicAI : public DumbAI{

	protected:
		bool moveToClosest(Engine& engine,const PathMap& path, Element* element);
		
	public:
		HeuristicAI(State& mainSt);
		void run(Engine& engine);

};



#endif /* HEURSTICAI_H */

