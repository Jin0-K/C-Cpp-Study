#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int N, M, i, j;
    int *buckets;

    cin >> N >> M;
    buckets = (int *)malloc(sizeof(int) * N);
    for (int b = 1; b <= N; b++)
    {
        buckets[b - 1] = b;
    }

    do
    {
        cin >> i >> j;
        swap(buckets + i - 1, buckets + j - 1);
    } while (--M);

    for (int b = 0; b < N; b++)
    {
        cout << buckets[b] << " ";
    }
    cout << endl;

    free(buckets);

    return 0;
}