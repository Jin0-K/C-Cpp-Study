#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T, A, B;

    cin >> T;

    while (T--)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}