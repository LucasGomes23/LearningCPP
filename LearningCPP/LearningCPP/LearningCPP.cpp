#include <stdio.h>

int main()
{
    printf("hello.\n");

    //Data
    int age = 21;

    {
        // character range is [-128,127]
        char my_character = 0x74;  // 8 bits - byte
                                  // 16 - 2 bytes - word



        // unsigned char range is [0, 255]

        unsigned char my_unsigned_char = 12;



        // unsigned int range ir [0, 4294967295]

        unsigned int my_long_number = 4294967295;



        // bool range is [0,1]

        bool my_bool = false;



        // unsigned long long range is [0, 18446744073709551615]

        unsigned long long my_long = 1238712936182736;



        int number_of_cars[3] = { 1, 2, 3 };



        // float uses 32 bits

        float pi_float = 3.1415926535;



        // double uses 64 bits

        double pi_double = 3.1415926535;

        printf("The value of character is %.10f", pi_double);

    }
    //binary to hexadecimal

    // 0000 = 0
    // 0001 = 1
    // 0010 = 2
    // 0011 = 3
    // 0100 = 4
    // 0101 = 5
    // 0110 = 6
    // 0111 = 7
    // 1000 = 8
    // 1001 = 9
    // 1010 = A
    // 1011 = B
    // 1100 = C
    // 1101 = D
    // 1110 = E
    // 1111 = F

    //example:  0110 1111 = 3F

    //decimal to binary 
    //116 = (bin) 0111 0100 = (hex) 74
    // 116 - 64 = 52
    // 20 - 16
    // 4
}