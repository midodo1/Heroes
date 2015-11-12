#ifndef DEF_ELEMENT
#define DEF_ELEMENT
#include <iostream>
#include <string>



	enum  TypeID 
					{
						HERO=1,
						SOLDIER=2,
						SPACE=3,
						WALL=4,
						
					};

	enum Direction
					{
						NONE=0,
						EAST=1,
						NORTH=2,
						WEST=3,
						SOUTH=4,
					};



class Element{

	public:	
	
		Element();
		
		virtual ~Element() ;
		
		virtual bool const isStatic() ;
	
		TypeID const getTypeID();
	
		int const getX();
	
		int const getY();
		
		Direction const  getDirection();
		
		void setX(int x);
		
		void setY(int y);
		
		void setDirection(Direction orientation);
		

	protected:
	
		int x;
	
		int y;
	
		Direction orientation;
		
		TypeID typeID ;
		
	
};

#endif
