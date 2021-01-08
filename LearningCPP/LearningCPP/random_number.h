#pragma once
#include <random>


// This function will generate a random
// number between the values of *lower*
// and *higher*
int get_random_number(int lower, int higher)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(lower, higher);
	return dist(rng);
}