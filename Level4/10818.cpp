#include <iostream>

using namespace std;

int main()
{
    int N, num;
    int min = 1000000;
    int max = -1000000;

    cin >> N;
    do
    {
        cin >> num;
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    } while (--N);

    cout << min << " " << max << endl;

    return 0;
}