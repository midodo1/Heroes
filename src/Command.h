#ifndef DEF_COMMAND
#define DEF_COMMAND
#include <string>
#include <iostream>
#include <vector>


enum CommandTypeID {
						LOAD = 1, 
						MODE = 2, 
						DIRECTION = 3
					};

class Command{
	
		public:
		
				Command();
				
				int const getCategory();
				
				CommandTypeID const getTypeID();
		
};

#endif
