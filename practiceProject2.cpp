#include <iostream>

/*
    Building a simple calculator by seeing how the switch statement work
*/

int main()
{
    char op;
    double num1, num2, result;

    std::cout << "******************* CALCULATOR *******************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << "\n";
        break;
    default:
        std::cout << "Please enter the operand either (+ - * /).";
    }
    std::cout << "**************************************************\n";

    return 0;
}