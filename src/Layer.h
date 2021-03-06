#ifndef DEF_LAYER
#define DEF_LAYER
#include <string>
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Surface.h"
#include "TileSet.h"
#include "StateObserver.h"



class Layer : virtual public StateObserver{
	
		public:
			
				Layer();
				
				virtual ~Layer();
				
				const TileSet* getTileSet(); 
				
				void setTileSet(const TileSet* tileset);
				
				void setSurface(Surface* surface);
                                
                               // bool const operator == (Surface* surf);
				
				void printText(int x,int y,const char* msg,int spriteIDx,int w,int h);
			
		protected:
		
				Surface* surface;
			
				const TileSet* tileset;
			
};

#endif

