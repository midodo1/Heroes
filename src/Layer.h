#ifndef DEF_LAYER
#define DEF_LAYER
#include <string>
#include <iostream>
#include <vector>
#include "Surface.h"
#include "TileSet.h"
#include "Animation.h"




class Layer{
	
		public:
			
				Layer();
				
				virtual ~Layer();
				
				const TileSet* const getTileSet(); 
				
				void setTileSet(const TileSet* tileset);
				
				void setSurface(Surface* surface);
				
				void setAnimation(int i,Animation* a);
				
				void printText(int x,int y,const char* msg,int spriteIDx,int w,int h);
			
				void sync(int64_t time);
				
				void update(int64_t time);
			
		protected:
		
				Surface* surface;
			
				const TileSet tileset;
			
		private:
		
				std::map<int,Animation*> animations;
						
};

#endif
