#include <iostream>
#include <string>
#include "Element.h"
#include "MobileElement.h"
#include "StaticElement.h"
#include "Hero.h"
#include "Soldier.h"
#include "Citizen.h"
#include "Building.h"
#include "Grass.h"
#include "Roc.h"
#include "ElementFactory.h"
#include "AElementAlloc.h"
#include "ElementAlloc.h"




using namespace std ;

int main(){
	/*
	Element ez,lol;
	
	cout<<ez.equals(lol)<<endl;
	
	ez.setX(43);
		
	cout<<ez.getX()<<endl;
	
	ez.setY(70);
	cout<<ez.getY()<<endl;

	cout<<ez.equals(lol)<<endl;
	
    lol.setOrientation(3);
    ez.setOrientation(4);
    
    cout<<(int)lol.getOrientation()<<endl;
    cout<<(int)ez.getOrientation()<<endl;
*/


	MobileElement ez,lol,haha,mobi;
	Element elt;
	//Element elt1(1,3,Element::WEST);
	//MobileElement mobi1 (4 , 18 ,Element::SOUTH,6,7,8);
	//Hero her = new MobileElement(4 , 18 ,Element::SOUTH,6,7,8);
	StaticElement stat ;
/*

	cout<<elt.getX()<<endl;
	cout<<elt.getY()<<endl;
	cout<<(int)elt.getDirection()<<endl;



	cout<<"             "<<endl;
	eltclone.setX(20);
	cout<<eltclone.getX()<<endl;
	cout<<eltclone.getY()<<endl;
	cout<<(int)eltclone.getDirection()<<endl;

	//cout<<ez.equals(lol)<<endl;
	


*/
	
	Hero her ;
	Element* copy = her.clone();

	copy->setX(23);
	cout<<copy->getX()<<endl;
	
return 0 ;


}
