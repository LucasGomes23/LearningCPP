#pragma once
#include <iostream>
#include "random_number.h"

void play_game_for()
{
	int answer = get_random_number(0, 10);
	int number_of_guesses = 5;
	for (int i = 0; i < number_of_guesses; i++)
	{
		std::cout << "Please enter a number: ";
		int guess;
		std::cin >> guess;
		// Here we have number taht is input by a user


		if (guess > answer)
		{
			std::cout << "Guess is too high, try a lower number. \n";
		}
		else if (guess > answer)
		{
			std::cout << "Guess is too low, try a higher nummber. \n";
		}
		else
		{
			std::cout << "Well done, the answer is correct. \n";
			break;
		}
	}
}


void play_game_do_while()
{
	int answer = get_random_number(1, 10);
	int user_input;
	
	do
	{
        std::cout << "Please enter a number: ";
		std::cin >> user_input;
		// Here we have number taht is input by a user


		if (user_input > answer)
		{
			std::cout << "Guess is too high, try a lower number. \n";
		}
		else if (user_input > answer)
		{
			std::cout << "Guess is too low, try a higher nummber. \n";
		}
		else
		{
			std::cout << "Well done, the answer is correct. \n";
			break;
		}
	} while (user_input != answer); 
}

void play_game_while()
{
	int answer = get_random_number(1, 10);
	int user_input = -1;

	while (user_input != answer)
	{
		std::cout << "Please enter a number: ";
		std::cin >> user_input;
		// Here we have number taht is input by a user


		if (user_input > answer)
		{
			std::cout << "Guess is too high, try a lower number. \n";
		}
		else if (user_input > answer)
		{
			std::cout << "Guess is too low, try a higher nummber. \n";
		}
		else
		{
			std::cout << "Well done, the answer is correct. \n";
			break;
		}
	} while (user_input != answer);
}