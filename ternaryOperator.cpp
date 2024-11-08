#include <iostream>

/*
    ternary operator ?: = replacement to an if/else statement
    condition ? expression1 : expression2;
*/

int main()
{
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    bool hungry = true;
    std::cout << (hungry ? "You are hungry" : "You are full");
    return 0;
}