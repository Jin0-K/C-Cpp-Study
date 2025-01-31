#include <iostream>

using namespace std;

int main()
{
    int N, v;
    int *arr;
    int result = 0;

    cin >> N;
    arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cin >> v;
    for (int i = 0; i < N; i++)
    {
        if (v == arr[i])
        {
            result++;
        }
    }
    cout << result << endl;

    free(arr);

    return 0;
}