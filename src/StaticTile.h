#ifndef DEF_STATICTILE
#define DEF_STATICTILE
#include <string>
#include <iostream>
#include <vector>
//#include "TileSet.h"
#include "StateObserver.h"
#include "StaticTile.h"



class StaticTile:Public Tile{
	
	protected:
		int x;
		int y;
		int width;
		int height;

	public:
		StaticTile(int x, int y, int width, int height);
		int getX() const;
		int getY() const;
		int getWidth() const;
		int getHeight() const;
		void setX(int x);
		void setY(int y);
		void setWidth(int width);
		void setHeight(int height);

			 						
};

#endif

