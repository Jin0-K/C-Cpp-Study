#include <iostream>
#define NUM(x) (x - 1)

using namespace std;

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int N, M;
    int *baskets;
    int b1, b2;

    cin >> N >> M;
    baskets = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        baskets[i] = i + 1;
    }

    do
    {
        cin >> b1 >> b2;
        while (b1 < b2)
        {
            swap(baskets + NUM(b1), baskets + NUM(b2));
            b1++;
            b2--;
        }
    } while (--M);

    for (int i = 0; i < N; i++)
    {
        cout << baskets[i] << " ";
    }
    cout << "\n";

    free(baskets);

    return 0;
}