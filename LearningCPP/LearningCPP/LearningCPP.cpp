#include <iostream>
#include <string>

void show_and(bool a, bool b)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "b: " << std::to_string(b) << "  "
		<< "a and b: " << std::to_string(a && b) << "\n";
}
void show_xor(bool a, bool b)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "b: " << std::to_string(b) << "  "
		<< "a and b: " << std::to_string((!a && b) || (a && !b)) << "\n";
}
void show_not(bool a, bool b)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "b: " << std::to_string(b) << "  "
		<< "a and b: " << std::to_string(a && !b) << "\n";
}
void show_or(bool a, bool b)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "b: " << std::to_string(b) << "  "
		<< "a and b: " << std::to_string(!a && b) << "\n";
}
int main()
{

	std::cout << "====TRUTH TABLE FOR AND =========\n";

	show_and(false, false);
	show_and(false, true);
	show_and(true, false);
	show_and(true, true);

	std::cout << "====TRUTH TABLE FOR OR =========\n";

	show_and(false, false);
	show_and(false, true);
	show_and(true, false);
	show_and(true, true);

	std::cout << "====TRUTH TABLE FOR XOR =========\n";


	show_and(false, false);
	show_and(false, true);
	show_and(true, false);
	show_and(true, true);

	std::cout << "====TRUTH TABLE FOR NOT =========\n";

	show_and(false, false);
	show_and(false, true);
	show_and(true, false);
	show_and(true, true);

}
