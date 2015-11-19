#ifndef DEF_RECORD
#define DEF_RECORD
#include <vector>
#include "ActionList.h"

class Record
{
	protected:
	
		std::vector <ActionList*> actions;
	
	public:
	
		Record();
		
		~Record();
		
		void startRecord();
		
		void stopRecord();
};


