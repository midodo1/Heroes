#include "Layer.h"

using namespace std ;

Layer::Layer(){}

Layer::~Layer(){}

const TileSet* Layer::getTileSet(){
	
	return titleset;
} 

void Layer::setTileSet(const TileSet* tileset){
	
	this->titleset=titleset;
}

void Layer::setSurface(Surface* surface){
	
	this->surface=surface;
}


void Layer::printText(int x,int y,const char* msg,int spriteIDx,int w,int h){
	// SpriteIDx
	sf::Font font;
	font.loadFromFile("res/police/FLATS.ttf");
	sf::Text text;
	text.setFont(font);
	text2.setString(msg);
	text2.setCharacterSize(h);
	text2.setPosition(x,y);
	text2.setColor(sf::Color::Black);
	
}


