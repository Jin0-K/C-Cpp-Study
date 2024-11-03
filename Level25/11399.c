#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b);

int main(void) {
    int N;
    int *line;
    int result = 0;

    // get input
    scanf("%d", &N);
    line = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", line+i);
    }

    // Sort the line
    qsort(line, N, sizeof(int), compare);

    // Calculate the result
    for(int i = 0; i < N; i++) {
        result += line[i] * (N-i);
    }

    // Print the output
    printf("%d", result);

    // free allocation
    free(line);

    return 0;
}

int compare(int *a, int *b) {
    return *a - *b;
}