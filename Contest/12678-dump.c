#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MOD(n) n % 30031

typedef struct Bus
{
    int *busStop;
    int position;
} Bus;

void allocBusStop(bool *busstop, int stopnum);
void freeBusStop(bool *busstop);
Bus allocBuses(Bus *buses, int busnum, int stopnum);
Bus freeBuses(Bus *buses, int busnum);
bool isAllArrived(bool *busstop, int stopnum, int busnum);

int main(void)
{
    int T, N, K, P; // N: Bus stop number, K: Bus number, P: Maximum distance move
    bool *busStop;  // Check if the stop was visited
    Bus *buses;     // Visited location of the buses(0 to K-1)

    scanf("%d", &T);

    for (int testcase = 1; testcase <= T; testcase++)
    {
        scanf("%d %d %d", &N, &K, &P);
        printf("Case #%d: ", testcase);

        allocBusStop(&busStop, N);
        allocBuses(buses, K, N);

        // Dynamic programming

        freeBusStop(&busStop);
        freeBuses(buses, K);
    }

    return 0;
}

void allocBusStop(bool *busstop, int stopnum)
{
    busstop = malloc(sizeof(bool) * stopnum);
    memset(busstop, false, sizeof(bool));
}

void freeBusStop(bool *busstop)
{
    free(busstop);
}

Bus allocBuses(Bus *buses, int busnum, int stopnum)
{
    buses = malloc(sizeof(Bus) * busnum);
    for (int i = 0; i < busnum; i++)
    {
        buses[i].busStop = calloc(stopnum, sizeof(int));
        buses[i].position = 0;
    }
}

Bus freeBuses(Bus *buses, int busnum)
{
    free(buses->busStop);
    free(buses);
}

bool isAllArrived(bool *busstop, int stopnum, int busnum)
{
    for (int i = 0; i < busnum; i++)
    {
        if (!(busstop + stopnum - i))
        {
            return false;
        }
    }
    return true;
}

int DP(bool *busstop, int stopnum, Bus *buses, int busnum, int maxmove, int busid, int pos)
{
    if (isAllArrived(busstop, stopnum, busnum))
    {
        memset(busstop, false, sizeof(bool));
        return 1;
    }
    for (; busid < busnum; busid++) // Check all possibilities for each bus
    {
        // if (busstop[pos])
        // {
        //     continue;
        // }
        // if (buses[busid].busStop[buses[busid].position] + maxmove < pos) {
        //     return 0;
        // }
        // DP()
    }
}
