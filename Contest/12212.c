#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int compare(const void *a, const void *b);
void convertExponential(int *array, int arraySize);
int tilesToBuy(int n, int m, int *tiles);
void cutTiles(int height, int width, int *tiles, int tileNum, int count);

int main(void)
{
    int T, N, M, result;
    scanf("%d", &T);

    for (int testcase = 1; testcase <= T; testcase++)
    {
        scanf("%d %d", &N, &M);
        int *tilesNeeded = malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", tilesNeeded + i);
        }

        // Sort the tiles needed in descending order
        qsort(tilesNeeded, N, sizeof(int), compare);

        // Convert the tiles needed into the actual size
        convertExponential(tilesNeeded, N);

        // Compute the minimum count of tiles to buy
        result = tilesToBuy(N, M, tilesNeeded);

        // print the result
        printf("Case #%d: %d\n", testcase, result);
        free(tilesNeeded);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    return *(const int *)b - *(const int *)a;
}

void convertExponential(int *array, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = exp2((double)array[i]);
    }
}

bool gotAll(int *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i]) {
            return false;
        }
    }
    return true;
}

int tilesToBuy(int n, int m, int *tiles)
{
    int bigTileCount = 0;
    do {
        cutTiles(m, m, tiles, n, bigTileCount++);
    } while (!gotAll(tiles + bigTileCount, n - bigTileCount));

    return bigTileCount;
}

void cutTiles(int height, int width, int *tiles, int tileNum, int count)
{
    for (int i = count; i < tileNum; i++)
    {
        if (tiles[i] == 0)
        {
            continue;
        }
        if (tiles[i] <= height && tiles[i] <= width)
        {
            width -= tiles[i];
            cutTiles(height - tiles[i], tiles[i], tiles, tileNum, i + 1);
            tiles[i] = 0;
        }
    }
    return;
}