#include <iostream>
#include <random>
#include <ctime>

#include "Entity.hpp"

void setup(){
	std::ios_base::sync_with_stdio(false);
	srand(time(nullptr));
}

int main(){
	setup();
}