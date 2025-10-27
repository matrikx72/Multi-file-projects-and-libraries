#include <iostream>
#include<string>
#include"Class.h"

int main()
{
    int init_Num;
    char choice;
    char command;

    std::cout << "Do you want to specify the initial value of the counter?\nEnter yes or no:" << std::endl;

    do
    {
        std::cin >> choice;
        choice = tolower(choice);
        if (choice != 'y' && choice != 'n')
        {
            std::cout << "Incorrect input, enter 'y' or 'n'." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (choice != 'y' && choice != 'n');

    Counter count;

    if (choice == 'y')
    {
        std::cout << "Enter the initial value: ";
        std::cout << std::endl;

        while (!(std::cin >> init_Num))
        {
            std::cout << "Incorrect input. Please enter an integer: ";
            std::cout << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        count = Counter(init_Num);
    }

    std::cout << "\t Commands:" << std::endl;
    std::cout << "+ : Increase the value by 1" << std::endl;
    std::cout << "- : Decrease the value by 1" << std::endl;
    std::cout << "= : Output the current value" << std::endl;
    std::cout << "x : Exit the program" << std::endl;
    std::cout << std::endl;

    while (true)
    {
        std::cout << "Enter the command('+', '-', '=' or 'x'):" << std::endl;
        std::cin >> command;
        command = tolower(command);

        switch (command)
        {
        case '+':
            count.increment();
            break;
        case '-':
            count.decrement();
            break;
        case '=':
            std::cout << count.getNum() << std::endl;
            break;
        case 'x':
            std::cout << "Godbay!" << std::endl;
            return EXIT_SUCCESS;
        default:
            std::cout << "Invalid command. Repeat the input." << std::endl;
            break;
        }
    }
    return EXIT_SUCCESS;
}
