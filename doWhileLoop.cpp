#include <iostream>

/*
    do while loop = do some block of code first,
            THEN repeat again if condition is true
*/

int main()
{

    int number;

    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);
    return 0;
}