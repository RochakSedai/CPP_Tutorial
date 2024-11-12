#include <iostream>

int searchArray(int array[], int size, int element);

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(number) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(number, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
    {
        std::cout << myNum << " is not in the array";
    }
    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1; // it typically mean something wasn't found
}