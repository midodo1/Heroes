#include "Layer.h"

using namespace std ;

Layer::Layer(){}

Layer::~Layer(){}

const TileSet* Layer::getTileSet(){
	
	return tileset;
} 

void Layer::setTileSet(const TileSet* tileset){
	
	this->tileset = tileset;
}

void Layer::setSurface(Surface* surface){
	
	this->surface=surface;
}

/*bool const Layer::operator == (Surface* surf)
{
    return this->surface = surf;
}*/


void Layer::printText(int x,int y,const char* msg,int spriteIDx,int w,int h){
	// SpriteIDx
	sf::Font font;
	font.loadFromFile("res/police/FLATS.ttf");
	sf::Text text2;
	text2.setFont(font);
	text2.setString(msg);
	text2.setCharacterSize(h);
	text2.setPosition(x,y);
	text2.setColor(sf::Color::Black);
	
}


