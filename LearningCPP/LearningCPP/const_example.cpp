#include "guessing_game.h"
#include <iostream>
#include <string>

void const_example()
{
	int const age = 17;
	std::cout << "my age is: " << std::to_string(age) << "\n";

	/*  if (age = 18) // is not valid with const */
	if (age == 18)

	{
		std::cout << "Show you passport \n";

	}
	else if (age >= 18)
	{
		std::cout << "You can buy alcohol. \n";
	}
	else
	{
		std::cout << "you cannot buy alcohol. \n";

	}
	std::cout << "my age is: " << std::to_string(age) << "\n";
}