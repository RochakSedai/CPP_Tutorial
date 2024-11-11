#include <iostream>

double square(double length);

int main()
{
    double length;
    /*
        return = return a value back to the spot
                where you called the encompassing function
    */
    std::cout << "Enter the length the square: ";
    std::cin >> length;

    double area = square(length);
    std::cout << "The are of square is: " << area;
    return 0;
}

double square(double length)
{
    return length * length;
}