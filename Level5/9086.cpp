#include <iostream>

using namespace std;

int main(void)
{
    int T;
    char string[1001], first, last;

    // Get input for the number of testcases
    cin >> T;

    while (T--)
    {
        cin >> string;
        cout << string[0];
        for (int i = 0; i < 1001; i++)
        {
            if (string[i + 1] == '\0')
            {
                cout << string[i] << endl;
                break;
            }
        }
    }

    return 0;
}