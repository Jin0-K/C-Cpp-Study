#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    N: the number of coins
    K: sum of the coin values
    */
    int N, K;
    int *coins;
    int *coin_num;
    int result = 0;

    // Get the input
    scanf("%d %d", &N, &K);
    // Allocate space for coin values
    coins = malloc(sizeof(int) * N);
    coin_num = malloc(sizeof(int) * N);
    // Get the input of each value of the coins and initialize coins_num
    for (int i = 0; i < N; i++)
    {
        scanf("%d", coins + i);
        coin_num[i] = 0;
    }

    // Select the highest but lower K value coin
    for (int i = N - 1; i >= 0; i--)
    {
        while (coins[i] <= K)
        {
            (coin_num[i])++;
            K -= coins[i];
        }
        if (K <= 0)
        {
            break;
        }
    }

    // Get the minimum number of coins
    for (int i = 0; i < N; i++)
    {
        result += coin_num[i];
    }

    printf("%d", result);

    return 0;
}