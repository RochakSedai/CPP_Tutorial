#include <iostream>

/*
    if statements = do something if a condition is true.
    if not, then don't do it.
*/
int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 18)
    {
        std::cout << "Oops!! Sorry you are under age." << "\n";
    }
    else
    {
        std::cout << "Bingo!! You have passed the age test.";
    }

    return 0;
}