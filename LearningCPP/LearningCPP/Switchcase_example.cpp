#include <iostream>
#include <string>

void switchcase_example()
{

	std::cout << "=============== Days of the week =========== \n";
	std::cout << "   Monday = 0\n";
	std::cout << "   Tuesday = 1\n";
	std::cout << "   wednesday = 2\n";
	std::cout << "   Thursday = 3\n";
	std::cout << "   Friday = 4\n";
	std::cout << "   Saturday = 5\n";
	std::cout << "   Sunday = 6\n\n";

	std::cout << "Please enter today's week day (0-6): ";

	int week_day;

	std::cin >> week_day;

	switch (week_day)
	{
	case 0:
		std::cout << "You have entered Monday\n";
		break;

	case 1:
		std::cout << "You have entered Tuesday\n";
		break;
	case 2:
		std::cout << "You have entered Wednesday\n";
		break;
	case 3:
		std::cout << "You have entered  Thursday\n";
		break;
	case 4:
		std::cout << "You have entered Friday\n";
		break;
	case 5:
		std::cout << "You have entered Saturday\n";
		break;
	case 6:
		std::cout << "You have entered Sunday\n";
		break;

	default:
		std::cout << " you have entered an invalid number.\n";
		break;
	}


}