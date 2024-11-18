#include <stdio.h>
#include <stdlib.h>

#define MOD(n) n % 10007

short DP(short **knight, int r, int c);

int main(void)
{
    int N, H, W, R; // H: height, W: width, R: the number of rocks
    int rocks[2];
    short **knight;
    short result;

    scanf("%d", &N);

    for (int testcase = 1; testcase <= N; testcase++)
    {
        // Get input and allocate memory and do initialization
        scanf("%d %d %d", &H, &W, &R);
        knight = malloc(sizeof(short *) * H);
        for (int i = 0; i < H; i++)
        {
            knight[i] = calloc(W, sizeof(short));
        }

        for (int i = 0; i < R; i++)
        {
            scanf("%d %d", rocks, rocks + 1);
            // Since the array starts from (0, 0) while chessboard starts from(1, 1), decrease 1 for each coordination
            knight[rocks[0] - 1][rocks[1] - 1] = -1;
        }
        printf("Case #%d: ", testcase);

        // Dynamic programming
        result = DP(knight, H - 1, W - 1);

        printf("%d\n", result);

        // Free allocation
        for (int i = 0; i < H; i++)
        {
            free(knight[i]);
        }
        free(knight);
    }

    return 0;
}

short DP(short **knight, int r, int c)
{
    if (r < 0 || c < 0) // When out of bounds
    {
        return 0;
    }
    if (knight[r][c] < 0) // When the rock is on the point
    {
        return 0;
    }
    if (r == 0 && c == 0) // Start point
    {
        return 1;
    }
    if (knight[r][c] == 0)
    {
        knight[r][c] = MOD(DP(knight, r - 2, c - 1) + DP(knight, r - 1, c - 2));
    }
    return knight[r][c];
}