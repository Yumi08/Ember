#pragma once

#include "Player_Character.hpp"

struct Game_Context{
	unsigned int score = 0;
	unsigned int turn = 1;
	Player_Character Player;
};