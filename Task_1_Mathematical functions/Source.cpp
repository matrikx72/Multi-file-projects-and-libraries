#include <iostream>
#include <string>
#include "Mat_function.h"

int main()
{
    double value_1, value_2;
    int command;
    std::cout << "Enter the first number : " << std::endl;
    std::cin >> value_1;
    std::cout << "Enter the second number :" << std::endl;
    std::cin >> value_2;
    std::cout << "Select the operation(1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - exponentiation) :" << std::endl;
    std::cin >> command;
    std::cout << std::endl;

    while (true)
    {
        double result;
        switch (command)
        {
        case 1: std::cout << value_1 << " add " << value_2 << " = " << (result = add(value_1, value_2)) << std::endl;
            break;
        case 2: std::cout << value_1 << " multiply " << value_2 << " = " << (result = multiply(value_1, value_2)) << std::endl;
            break;
        case 3: std::cout << value_1 << " subtract " << value_2 << " = " << (result = subtract(value_1, value_2)) << std::endl;
            break;
        case 4: (value_2 == 0) ? std::cout << "Division by zero" << std::endl
                         : std::cout << value_1 << " divide " << value_2 << " = " << (result = divide(value_1, value_2)) << std::endl;
            break;
        case 5: std::cout << value_1 << " exponentiation " << value_2 << " = " << (result = exponentiation(value_1, value_2)) << std::endl;
            break;
        default: std::cout << "Invalid command." << std::endl;
            break;
        }
       
        break;
    };
   
    


    return EXIT_SUCCESS;
}