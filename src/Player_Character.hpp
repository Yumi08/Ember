#pragma once

#include "Entity.hpp"

class Player_Character : public Entity{
public:
	int hp;
	int hunger;
	int thirst;
};