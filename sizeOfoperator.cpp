#include <iostream>

/*
    sizeof() = determines the size in bytes of a:
    variable, data type, class, objects, etc.
*/
int main()
{
    double gpa = 2.5;
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    std::cout << sizeof(gpa) << "bytes\n";
    std::cout << sizeof(grades) << "bytes\n";
    return 0;
}