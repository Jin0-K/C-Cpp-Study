#include <stdio.h>
#include <stdlib.h>

#define MOD(n) n % 30031

int DP(int *busstop, int stopnum, int busnum, int maxmove, int pos)
{
    if (pos < 0)
    {
        return 0;
    }
    if (busstop[pos] == 0)
    {
        for (int i = 1; i <= maxmove; i++)
            busstop[pos] += MOD(DP(busstop, stopnum, busnum, maxmove, pos - i));
    }
    return MOD(busstop[pos]);
}

int main(void)
{
    int T, N, K, P; // N: Bus stop number, K: Bus number, P: Maximum distance move
    int *busStop;   // The number of cases
    int result;

    scanf("%d", &T);

    for (int testcase = 1; testcase <= T; testcase++)
    {
        scanf("%d %d %d", &N, &K, &P);
        printf("Case #%d: ", testcase);

        busStop = calloc(N, sizeof(int));
        for (int i = 0; i < K; i++)
        {
            busStop[i] = 1;
        }

        // Dynamic programming
        result = DP(busStop, N, K, P, N - 1);

        // Print result
        printf("%d\n", result);

        free(busStop);
    }

    return 0;
}
