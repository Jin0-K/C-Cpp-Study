#include <iostream>

using namespace std;

int main()
{
    int N, X;
    int *A;

    cin >> N >> X;
    A = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (X > A[i])
        {
            cout << A[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}