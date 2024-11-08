#include <iostream>

/*
    switch = alternative to using many "else if" statements
    compare one value against matching cases
*/

int main()
{
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Its a January";
        break;
    case 2:
        std::cout << "Its a Februrary";
        break;
    case 3:
        std::cout << "Its a March";
        break;
    case 4:
        std::cout << "Its a April";
        break;
    case 5:
        std::cout << "Its a May";
        break;
    case 6:
        std::cout << "Its a June";
        break;

    case 7:
        std::cout << "Its a July";
        break;
    case 8:
        std::cout << "Its a August";
        break;

    case 9:
        std::cout << "Its a September";
        break;
    case 10:
        std::cout << "Its a October";
        break;
    case 11:
        std::cout << "Its a November";
        break;
    case 12:
        std::cout << "Its a December";
        break;
    default:
        std::cout << "Please enter only numbers between (1-12)";
    }
    return 0;
}