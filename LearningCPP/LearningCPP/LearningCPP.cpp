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
void show_not(bool a)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "not a: " << std::to_string(!a) << "\n";
}
void show_or(bool a, bool b)
{
	std::cout << "a: " << std::to_string(a) << "  "
		<< "b: " << std::to_string(b) << "  "
		<< "a and b: " << std::to_string(a || b) << "\n";
}
int main()
{

	std::cout << "====TRUTH TABLE FOR AND =========\n";

	show_and(false, false);
	show_and(false, true);
	show_and(true, false);
	show_and(true, true);

	std::cout << "====TRUTH TABLE FOR OR =========\n";

	show_or(false, false);
	show_or(false, true);
	show_or(true, false);
	show_or(true, true);

	std::cout << "====TRUTH TABLE FOR XOR =========\n";


	show_xor(false, false);
	show_xor(false, true);
	show_xor(true, false);
	show_xor(true, true);

	std::cout << "====TRUTH TABLE FOR NOT =========\n";

	show_not(false);
	show_not(true);

}
