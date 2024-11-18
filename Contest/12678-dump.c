#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MOD(n) n % 30031

typedef struct Bus
{
    int *busStop;
    int position;
    bool arrived;
} Bus;

void allocDpCount(int *dpcount, int stopnum);
void freeDpCount(int *dpcount);
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
    int *dpCount;

    scanf("%d", &T);

    for (int testcase = 1; testcase <= T; testcase++)
    {
        scanf("%d %d %d", &N, &K, &P);
        printf("Case #%d: ", testcase);

        allocDpCount(dpCount, N);
        allocBusStop(&busStop, N);
        allocBuses(buses, K, N);

        // Dynamic programming

        freeDpCount(dpCount);
        freeBusStop(&busStop);
        freeBuses(buses, K);
    }

    return 0;
}

void allocDpCount(int *dpcount, int stopnum) {
    dpcount = calloc(stopnum, sizeof(int));
    dpcount[0] = 1;
}

void freeDpCount(int *dpcount) {
    free(dpcount);
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
        buses[i].arrived = false;
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

int DP(int *dpcount, bool *busstop, int stopnum, Bus *buses, int busnum, int maxmove, int pos)
{
    // Code for recursive implementation
    if (isAllArrived(busstop, stopnum, busnum))
    {
        dpcount[buses[0].busStop[buses[0].position]]++;
        return 1;
    }


    // Code for loop implementation (NOT GONNA WORK)
    while (!isAllArrived(busstop, stopnum, busnum)) // Loop untill all buses arrive the last K bus stops
    {
        if (busstop[pos])
        {
            continue;
        }
        for (int busId = 0; busId < busnum; busId++) {
            if(!buses[busId].arrived) // When the bus has already arrived the destination
            {
                continue;
            }
            for(int move = 1; move < maxmove; move++) {
                if(!busstop[buses[busId].busStop[buses[busId].position]]) // When the stop has not been visited
                {
                    busstop[buses[busId].busStop[buses[busId].position]] = true; // Check the stop as visited
                    // push stack
                    buses[busId].busStop[buses[busId].position + 1] = buses[busId].busStop[buses[busId].position] + move;
                    if (buses[busId].busStop[buses[busId].position] > stopnum - busnum) { // If the bus has arrived
                        buses[busId].arrived = true;
                    }
                    (buses[busId].position)++;
                    break;
                }
            }
        }
        // DP()
    }
}
