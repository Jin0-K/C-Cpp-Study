#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int star = 0; star < i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}