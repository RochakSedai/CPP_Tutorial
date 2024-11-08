#include <iostream>
#include <vector>
/*
    typedef = reserver keyword used to create an additional nam
    (alias) for another data type.
    New identifier for an existing type
    Help in readability and reduces type

    nowadays it is being replaces with 'using' keyword   (work better w/ templates)
*/
typedef std::string text_t;
using number_t = int;

int main()
{
    text_t firstName = "Rochak";

    number_t num = 2;

    std::cout << firstName << '\n';
    std::cout << num << '\n';

    return 0;
}