#include <iostream>
/*
    null pointer = a special value that means something has no value
                    When a pointer is holding a null value
                    that pointer is not pointing at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an address was successfully assigned to a pointer
*/
int main()
{
    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Address was not assigned!\n";
    }
    else
    {
        std::cout << "Address was assigned!\n";
    }
    return 0;
}