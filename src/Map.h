w#ifndef DEF_MAP
#define DEF_MAP
#include <string>
#include <iostream>
#include <vector>
#include "Surface.h"
#include "TileSet.h"
#include "Animation.h"
#include "StateObserver.h"
#include <SFML/Graphics.hpp>


class Map:Public Surface, Public sf::Drawable, public sf::Transformable {
	
		public:
			
			 virtual void clear();
			 virtual void loadTexture(const char* tileset);
			virtual void setSpriteCount(int n);
			virtual void setSpriteLocation(int i, int x, int y);
			virtual void setSpriteTexture(int i, const render::StaticTile* tex);
			 						
		protected:
			sf::VertexArray vertices;
			sf::Texture tileset;	 
			
		private:
			void draw(sf::RenderTarget& target, sf::RenderStates states) const;						
};

#endif

