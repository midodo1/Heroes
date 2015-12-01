#include "Scene.h"

using namespace std ;

Scene::Scene()
{
	layers.push_back(new ElementListLayer());	
	layers.push_back(new ElementListLayer());
}

Scene::~Scene(){}

int const Scene::getWidth()
{
	return width ;
}

int const Scene::getHeight()
{
	return height;
}

int const Scene::getLayerCount()
{
	return layers.size();
}

void Scene::setLayer(int idx , Layer* layer)
{
	switch(idx){
		case 0 : 
			this->layers[GRID_LAYER] = layer;	
			break;
		case 1 : 
			this->layers[CHARS_LAYER] = layer;
			break;
		case 2:
			this->layers[STATE_LAYER] = layer;
			break;
	}
}

void Scene::setSurface(int idx , Surface* surface)
{
	//this->layers[idx].surface = surface ; use copy !!
}

void Scene::stateChanged(const StateEvent& e)
{
		((ElementListLayer*)layers[GRID_LAYER])->stateChanged(e);
}




