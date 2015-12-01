#ifndef DEF_RULER
#define DEF_RULER
#include "State.h"
#include "CommandSet.h"
#include "ActionList.h"
#include "State.h"
#include <iostream>
#include "Command.h"
#include "MoveCharacter.h"

class Ruler
{
		protected:
			const CommandSet& commands;
			State& currentState;
			ActionList actions;
			
		public:
			Ruler(CommandSet&, State& ,ActionList);
			~Ruler();
			void apply();
};

#endif
