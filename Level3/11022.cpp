#include <iostream>

using namespace std;

int main(void)
{
    int T, A, B;

    cin >> T;

    for (int test = 1; test <= T; test++)
    {
        cin >> A >> B;
        cout << "Case #" << test << ": " << A << " + " << B << " = " << A + B << "\n";
    }

    return 0;
}