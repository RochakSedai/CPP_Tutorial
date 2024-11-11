#include <iostream>

/*
    If want to learn more than visit the string class of c++ website/
*/

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name can't be over 12 characters";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    name.append("@gmail.com");
    std::cout << "Your username is " << name;
    return 0;
}