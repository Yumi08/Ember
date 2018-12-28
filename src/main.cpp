#include <random>
#include <ctime>

#include "Game.hpp"

void setup(){
	srand(time(nullptr));
}

int main(){
	setup();
	
	Game::game_loop();
}