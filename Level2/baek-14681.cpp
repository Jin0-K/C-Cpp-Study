#include <iostream>

using namespace std;

int main(void)
{
    int point[2];
    cin >> point[0] >> point[1];

    if ((point[0] == 0) || (point[1] == 0))
    {
        cout << "None" << endl;
    }
    else
    {
        if (point[0] > 0)
        {
            if (point[1] > 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 4 << endl;
            }
        }
        else
        {
            if (point[1] > 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }

    return 0;
}