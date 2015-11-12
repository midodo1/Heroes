#include "Map.h"

using namespace std ;

void SFMLSurface::clear()
{	
	vertices.clear();
}

void SFMLSurface::loadTexture(const char* tileset)
{
	if (!this->tileset.loadFromFile(tileset))
		std::cout << "Texture Error.." << std::endl;
}

void SFMLSurface::setSpriteCount(int n)
{
	this->vertices.setPrimitiveType(sf::Quads);
    this->vertices.resize(n * 4);
}

void SFMLSurface::setSpriteLocation(int i, int x, int y)
{	
	sf::Vertex* quad = &vertices[i * 4];
	
	quad[0].position = sf::Vector2f(x, y);
	quad[1].position = sf::Vector2f(x + 32, y);
	quad[2].position = sf::Vector2f(x + 32, y + 32);
	quad[3].position = sf::Vector2f(x, y + 32);
}

void SFMLSurface::setSpriteTexture(int i, const render::StaticTile* tex)
{

	sf::Vertex* quad = &vertices[i * 4];
	
	int x = tex->getX();
	int y = tex->getY();
	int width = tex->getWidth();
	int height = tex->getHeight();
	
	quad[0].texCoords = sf::Vector2f(x, y);
	quad[1].texCoords = sf::Vector2f(x + width, y);
	quad[2].texCoords = sf::Vector2f(x + width, y + height);
	quad[3].texCoords = sf::Vector2f(x, y + height);
}

void SFMLSurface::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	states.transform *= getTransform();

	states.texture = &(this->tileset);

	target.draw(this->vertices, states);
}