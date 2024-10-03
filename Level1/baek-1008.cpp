#include <iostream>

int main(void)
{
    double a, b;
    std::cin >> a >> b;
    std::cout.precision(15);
    std::cout << a / b << std::endl;

    return 0;
}