#include <iostream>
/*
    pointers = variable that stores a memory address of another variable
    sometimes it's easier to work with an address

    & address-of operator
    * dereference operator
*/
int main()
{
    std::string name = "Bro";
    int age = 21;

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *freePizzas = freePizzas; // we shouldn't use dereference operator in array beacause its already giving address

    std::cout << pName << '\n';
    std::cout << *pAge;
    return 0;
}