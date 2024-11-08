#include <iostream>
#include <cmath>

/*
    Practice program to calculate the hypotenuse of right angle traingle
*/

int main()
{
    double a, b;
    double c;

    std::cout << "Enter the size of a: ";
    std::cin >> a;
    std::cout << "Enter the size of b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse is: " << c;
    return 0;
}