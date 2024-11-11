#include <iostream>

/*
    array = a data structure that can be hold multiple values
    values are accessed by an index number
    they contain the value of same data type
    "kind of like a variable that holds multiple values"
*/

int main()
{
    std::string car[] = {"Corvetter", "Mustang", "Camry"};

    std::cout << car[0] << "\n";
    std::cout << car[1] << "\n";
    return 0;
}