#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    /*
    Namespace = provides a solution for preventing name conflicts
    in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespace are different.

    */
    int x = 0;

    std::cout << first::x;
    return 0;
}