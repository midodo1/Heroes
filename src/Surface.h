#ifndef DEF_SURFACE
#define DEF_SURFACE
#include <string>
#include <iostream>
#include <vector>
//#include "TileSet.h"
#include "StateObserver.h"
#include "StaticTile.h"



class Surface{
	
		public:
			 
			 virtual void clear()=0;
			 
			 virtual void loadTexture(const char* image_file)=0;
			 
			 virtual void setSpriteCount(int n)=0;
			 
			 virtual void setSpriteLocation(int i , int x , int y)=0;
			 
			 virtual void setSpriteTexture(int i , const StaticTile* tex)=0;
			 						
};

#endif

