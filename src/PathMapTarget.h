/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PathMapTarget.h
 * Author: jack
 *
 * Created on December 3, 2015, 5:16 PM
 */

#ifndef PATHMAPTARGET_H
#define PATHMAPTARGET_H

#include "Element.h"
#include <iostream>
	
class PathMapTarget {

	public:
		virtual ~PathMapTarget();
		virtual bool isTarget(int x, int y, const Element* element) const =0;
};


#endif /* PATHMAPTARGET_H */

