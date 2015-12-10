#ifndef IMPLANTATION__H
#define IMPLANTATION__H

#include "render.h"

namespace implantation {

  /// class Map - 
  class Map : public render::Surface {
    // Attributes
  public:
    sf::VertexArray vertices;
    sf::Texture tileset;
    // Operations
  public:
    void clear ();
    void loadTexture (const char* tileset);
    void setSpriteCount (int n);
    void setSpriteLocation (int i, int x, int y);
    void setSpriteTexture (int i, const StaticTile* staticTile);
  private:
    void const draw (sf::RenderTarget& target, RenderStates states);
  };

};

#endif
