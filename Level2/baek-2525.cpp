#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C;
    cin >> A >> B;
    cin >> C;

    B += C;
    if (B > 59)
    {
        C = B / 60;
        A += C;
        if (A > 23)
        {
            A %= 24;
        }
        B -= 60 * C;
    }

    cout << A << " " << B << endl;

    return 0;
}