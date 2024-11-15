#include <iostream>

/*
    const parameter = parameter that is effectively read-only code is more secure
    & conveys intent useful for references and pointers
*/
void printInfo(const std::string name, const int age);
int main()
{
    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age)
{
    // name = "";  we will get error because const parameter cannot be updated
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}