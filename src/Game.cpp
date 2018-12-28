#include "Game.hpp"

#include <iostream>

namespace Game{
	bool not_over = true;
	
	void game_loop(){
		// Start incrementing only after first working, playable build
		// SYNTAX: Major.Minor.Patch[a/b/nothing]
		// Major - Overhauls, non-backwards-compatibility, etc
		// Minor - Feature additions
		// Patch - Bug fixes
		std::cout << "Welcome to Ember v0.0.1a!\n";
		
		while (not_over){
		
		}
	};
}