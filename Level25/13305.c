#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N; // the number of cities
    int *road, *cityGasPrice;

    // Get input
    scanf("%d", &N);
    road = malloc(sizeof(int) * (N-1));
    cityGasPrice = malloc(sizeof(int) * N);
    for(int i = 0; i < N-1; i++) {
        scanf("%d", road+i);
    }
    for(int i = 0; i < N; i++) {
        scanf("%d", cityGasPrice+i);
    }

    // Calculate the minimum amount of total price
    int carLoc = 0;
    int chargeLoc = 0;
    long long int totalPrice = 0;
    while(carLoc < N-1) {
        if(cityGasPrice[chargeLoc] > cityGasPrice[carLoc]) {
            chargeLoc = carLoc;
        }
        totalPrice += (long long int)(road[carLoc]) * (long long int)(cityGasPrice[chargeLoc]);
        carLoc++;
    }
    

    // Print output
    printf("%lld", totalPrice);

    // Free allocation
    free(road);
    free(cityGasPrice);

    return 0;
}