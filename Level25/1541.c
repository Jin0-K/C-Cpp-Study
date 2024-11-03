#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[51];
    int minusShowedUp = 1;
    int result = 0;

    // Get input
    scanf("%s", string);

    // Change input string to number values and calculate the result
    char numBuf[6];
    int j = 0;
    memset(numBuf, '\0', sizeof(numBuf));
    for (int i = 0; i < 51; i++) {
        if (string[i] == '+') {
            result += atoi(numBuf) * minusShowedUp;
        }
        else if (string[i] == '-') {
            result += atoi(numBuf) * minusShowedUp;
            minusShowedUp = -1;
        }        
        else if (string[i] == '\0') {
            result += atoi(numBuf) * minusShowedUp;
            break;
        }
        else {
            numBuf[j++] = string[i];
            continue;
        }
        memset(numBuf, '\0', sizeof(numBuf));
        j = 0;
    }

    // Print the output
    printf("%d", result);

    return 0;
}