#include <iostream>

int main()
{

    // integer (whole number)
    int x = 5;
    int y = 5;
    int sum = x + y;

    // double (number including decimal)

    double days = 7.5;

    // single character
    char grade = 'A';

    // boolean (true or false)
    bool student = false;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << days << '\n';
    std::cout << grade << '\n';
    std::cout << student << '\n';
    std::cout << "Hello " << name << '\n';

    return 0;
}