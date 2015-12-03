/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AI.h
 * Author: jack
 *
 * Created on December 3, 2015, 2:01 PM
 */

#ifndef AI_H
#define AI_H


#include "State.h"
#include "CommandSet.h"
#include <iostream>

class AI {
	
	protected:
		const State mainState;

	public:
		AI(const State& mainSt);
		virtual ~AI();
		virtual void run(CommandSet& commands) =0;
};


#endif /* AI_H */

