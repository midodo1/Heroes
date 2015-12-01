#include "ElementGrid.h"
#include "ElementFactory.h"


ElementGrid::ElementGrid(State& state) : ElementList(state), width(0), height(0) {}

int const ElementGrid::getWidth() 
{
	return width;
}

int const ElementGrid::getHeight()
{		
	return height;
}

Element* ElementGrid::getCell(int i, int j) const
{
	return elements[i*width + j];
}

void ElementGrid::setCell(int i, int j, Element* e)
{
	this->elements[i*width + j] = e ;
}

void ElementGrid::loadLevel(const char* name){
	
	std::ifstream file(name, std::ios::in);
	char level[1024];

	if(file)
	{
		char buf;
		int idx = 0;
		while(file.get(buf)){

			if (buf !='\n'){
				level[idx] = buf;
				++idx;
			}
			if (buf =='\n')
				height += 1;
		}
		width = idx / height;
		file.close();
	}
	else
		std::cerr << "Failed to open the file!" << std::endl;
	

	for (unsigned int i = 0; i < height; ++i)
	{
		for (unsigned int j = 0; j < width; ++j)
		{
			switch(level[j+i*width]){
				case('0'):
				{
					Element* grassElt = factory->newInstance('0');	
					grassElt->setX(i);
					grassElt->setY(j);
					setElement(j+i*width, grassElt);			
				}
				break;
				case('1'):
				{
					Element* groundElt = factory->newInstance('1');
					groundElt->setX(i);
					groundElt->setY(j);
					setElement(j+i*width, groundElt);
				}
				break;
				case('2'):
				{
					Element* waterElt = factory->newInstance('2');
					waterElt->setX(i);
					waterElt->setY(j);
					setElement(j+i*width, waterElt);
				}
				break;
				case('3'):
				{
					Element* rocElt = factory->newInstance('3');
					rocElt->setX(i);
					rocElt->setY(j);
					setElement(j+i*width, rocElt);
				}
				break;
				case('4'):
				{
					Element* caserneElt = factory->newInstance('4');
					caserneElt->setX(i);
					caserneElt->setY(j);
					setElement(j+i*width, caserneElt);
				}
				break;
				case('5'):
				{
					Element* buildingElt = factory->newInstance('5');
					buildingElt->setX(i);
					buildingElt->setY(j);
					setElement(j+i*width, buildingElt);
				}
				break;
			}
		}
	}
}
