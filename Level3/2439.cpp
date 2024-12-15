#include <iostream>

using namespace std;

int main(void)
{
    int N, line;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int line = 0; line < N - i; line++)
        {
            cout << " ";
        }
        for (int star = 0; star < i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}