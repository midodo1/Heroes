#include "StaticTile.h"

using namespace std ;


StaticTile::StaticTile(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

int StaticTile::getX() const
{	
	return this->x;
}

int StaticTile::getY() const
{	
	return this->y;
}

int StaticTile::getWidth() const
{	
	return this->width;
}

int StaticTile::getHeight() const
{	
	return this->height;
}

void StaticTile::setX(int x)
{	
	this->x = x;
}

void StaticTile::setY(int y)
{	
	this->y = y;
}

void StaticTile::setWidth(int width)
{	
	this->width = width;
}

void StaticTile::setHeight(int height)
{	
	this->height = height;
}
