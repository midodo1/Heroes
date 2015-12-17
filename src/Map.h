#ifndef DEF_MAP
#define DEF_MAP
#include <string>
#include <iostream>
#include <vector>
#include <mutex>
#include <thread>
#include "Surface.h"
#include "TileSet.h"
#include "StateObserver.h"
#include <SFML/Graphics.hpp>


class Map : public Surface, public sf::Drawable, public sf::Transformable {
	
		public:
			
			virtual void clear();
			virtual void loadTexture(const char* tileset);
			virtual void setSpriteCount(int n);
			virtual void setSpriteLocation(int i, int x, int y);
			virtual void setSpriteTexture(int i, const StaticTile* tex);
			 						
		protected:
			sf::VertexArray vertices;
			sf::Texture tileset;	 
			
		private:
			void draw(sf::RenderTarget& target, sf::RenderStates states) const;						
};

#endif

