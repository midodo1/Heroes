#ifndef DEF_SCENE
#define DEF_SCENE
#include <string>
#include <iostream>
#include <vector>
#include "StateObserver.h"
#include "ElementListLayer.h"
#include "StateLayer.h"
#include "DebugLayer.h"
#include "State"
#include "Layer"
#include "StateEvent"
#include "Surface"


enum  SceneLayer 
					{
						GRID_LAYER = 1,
						CHARS_LAYER = 2,
						STATE_LAYER = 3,
					};

class Scene : virtual public StateObserver{
	
		protected:
		
			int width ;
			
			int height ;
	
			std::vector<Layer*> layers ;
			
		public:
		
			Scene();
					
			~Scene();
			
			int const getWidth();
					
			int const getHeight();
					
			int const getLayerCount();
			
			void setLayer(int idx , Layer* layer);
			
			void setSurface(int idx , Surface* surface);
			
			virtual void stateChanged(const StateEvent& e);
			
					
};

#endif












