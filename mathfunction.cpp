#include <iostream>
#include <cmath>

int main()
{
    double x = 2.54;
    double y = 3;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z;
    return 0;
}