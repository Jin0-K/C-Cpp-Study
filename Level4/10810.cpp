#include <iostream>

using namespace std;

int main()
{
    int N, M;
    int i, j, k;
    int *buckets;

    cin >> N >> M;
    buckets = (int *)calloc(N, sizeof(int) * N);

    do
    {
        cin >> i >> j >> k;
        for (; i <= j; i++)
        {
            buckets[i - 1] = k;
        }
    } while (--M);

    for (int bucket = 0; bucket < N; bucket++)
    {
        cout << buckets[bucket] << " ";
    }
    cout << "\n";

    return 0;
}