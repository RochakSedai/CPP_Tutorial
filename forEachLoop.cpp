#include <iostream>

/*
    foreach loop = loop that eases the traversal over an iterable data set
*/

int main()
{

    std::string students[] = {"Spongebob", "Rochak", "Maria"};

    for (std::string student : students)
    {
        std::cout << student << '\n';
    }
    return 0;
}