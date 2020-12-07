// LearningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int add(int a, int b);
void say_hello(std::string name);
/*
int main() //entry point
{
    std::cout << "Result of the calculation: " << std::to_string(pow(2, 8)) << "\n";
    std::cout << "Hello World!, lucas\n";
    return 2;
}
*/

/*
argc = 3 
argv ["hello", "example", "institute"}
retrned int mean the error of your program 
*/
int main(int argc, char** argv)
{
    say_hello("Lucas");
    std::cout << "hello world! \n" << "this is a new line \n";
    std::cout << "number of arguments: " << std::to_string(argc) << "\n";
    std::cout << " value passed to program at position 1: " << argv[0] << "\n";
    std::cout << " result of adding 17 and 10: " << std::to_string(add(17, 10)) << "\n";
    //std::cout << "hello " << argv[1] << "\n";
}

int add(int a, int b)
{

    return a + b;

}

void say_hello(std::string name)
{
    std::cout << "hello " << name << "\n";
}