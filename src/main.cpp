#include <iostream>
#include <random>
#include <ctime>

#include "Game.hpp"

void setup(){
	std::ios_base::sync_with_stdio(false);
	srand(time(nullptr));
}

int main(){
	setup();
	
	Game::game_loop();
}