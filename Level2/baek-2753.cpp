#include <iostream>

using namespace std;

int main(void)
{
    int year;
    cin >> year;

    if (!(year % 4) && ((year % 100) || !(year % 400)))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}