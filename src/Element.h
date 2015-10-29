#ifndef DEF_ELEMENT
#define DEF_ELEMENT
#include <iostream>
#include <string>



class Element{

	public:
	
		enum  TypeId 
					{
						Hero=1,
						Soldier=2,
						Citizen=3,
						Building=4,
						Roc=5,
						Grass=6
					};

		enum Direction
					{
						NONE=0,
						EAST=1,
						NORTH=2,
						WEST=3,
						SOUTH=4,
					};
	

	
	
		Element();
		
		Element(int a,int b,Element::Direction dir);
		
		//virtual ~Element();
	
		virtual TypeId const getTypeId();
		
		virtual bool const isStatic() ;
		
		virtual Element* const clone()  ;
		
		bool const equals(const Element&);
	
		int const getX();
	
		int const getY();
		
		Direction const  getOrientation();
		
		void setX(int);
		
		void setY(int);
		
		void setOrientation(int);

	protected:
	
		int x;
	
		int y;
	
		Direction orientation;
	
};

#endif
