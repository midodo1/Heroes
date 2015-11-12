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
			 
			 virtual void clear();
			 
			 virtual void loadTexture(const char* image_file);
			 
			 virtual void setSpriteCount(int n);
			 
			 virtual void setSpriteLocation(int i , int x , int y);
			 
			 virtual void setSpriteTexture(int i , const StaticTile* tex);
			 						
};

#endif

