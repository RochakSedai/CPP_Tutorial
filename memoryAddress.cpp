#include <iostream>

/*
    memory address = a loacation in memory where data is stored
    a memory address can accessed with & (address of operator)
*/

int main()
{
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    return 0;
}