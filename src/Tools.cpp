#include "Tools.hpp"

#include <atomic>

static std::atomic<unsigned int> atomic_id;

unsigned int Generate_ID(){
	return atomic_id++;
};