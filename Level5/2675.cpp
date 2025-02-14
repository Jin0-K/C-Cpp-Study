#include <iostream>

using namespace std;

int main(void)
{
    int T, R;
    string S;

    // Get input for testcases
    cin >> T;

    while (T--)
    {
        // Get input for R and string S
        cin >> R >> S;
        for (int i = 0; i < S.length(); i++)
        {
            // Print R times for each character
            for (int j = 0; j < R; j++)
            {
                cout << S[i];
            }
        }
        cout << "\n";
    }

    return 0;
}