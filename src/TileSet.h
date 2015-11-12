#ifndef DEF_TILESET
#define DEF_TILESET
#include <string>
#include <iostream>
#include <vector>
#include "Element.h"
#include "StaticTile.h"
#include "Tile.h"


class TileSet {
	
	public:
		~TileSet();
		virtual int getCellWidth() const ;
		virtual int getCellHeight() const ;
		virtual const char* getImageFile() const ;
			
					
};

#endif












