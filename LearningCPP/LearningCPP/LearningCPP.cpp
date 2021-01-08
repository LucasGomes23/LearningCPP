#include <iostream>
#include <string>


int main()
{
    int age = 10;
    std::cout << "the value of age is " << std::to_string(age) << "\n";

    // check the customer age
    if (age == 18)
    {
        std::cout << "age value is 18 \n";
    }
    else if (age == 17)
    {
        std::cout << "age value is 17\n";
    }
    else
    {
        std::cout << "age is not 18 or 17\n";
    }

    std::cout << "the value of age is " << std::to_string(age) << "\n";
}


