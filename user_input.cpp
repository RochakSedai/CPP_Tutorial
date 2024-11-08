#include <iostream>

using text_t = std::string;

int main()
{
    text_t name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your name?: ";

    // This is only used to input the single word
    // std::cin >> name;

    // If you want to input the whole line or sentences you need to use this command i.e. string that uses white spaces
    std::getline(std::cin >> std::ws, name);

    // But if the std::cin is followed by std::getline then we need to use this command.
    // std::getline(std::cin >> std::ws, name)

    std::cout << "My name is: " << name << "\n";
    std::cout << "My age is: " << age;
    return 0;
}