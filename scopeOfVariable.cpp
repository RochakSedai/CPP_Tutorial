#include <iostream>

/*
    Local variables = declared inside a function or block {}
    Global variables = declared outside all function
*/
void printNum();
int myNum = 3;

int main()
{
    printNum();
    std::cout << myNum;
    return 0;
}

void printNum()
{
    std::cout << myNum;
}