#include <iostream>

int year_converter(int year)
{
    return year + (1998 - 2541);
}

int main(void)
{
    int year;
    std::cin >> year;
    std::cout << year_converter(year) << std::endl;

    return 0;
}