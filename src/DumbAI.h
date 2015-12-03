/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DumbAI.h
 * Author: jack
 *
 * Created on December 3, 2015, 2:04 PM
 */

#ifndef DUMBAI_H
#define DUMBAI_H

#include "AI.h"
#include <iostream>

class CommandSet;
class State;
class StateEvent;
	
class DumbAI : public AI {
	
	protected:
		void dumbMove(int idx,CommandSet& commands);

	public:
		DumbAI(const State& mainSt);
		void run(CommandSet& commands);
		void stateChanged(const StateEvent& e);
};

#endif /* DUMBAI_H */

