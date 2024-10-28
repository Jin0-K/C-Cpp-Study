#include <stdio.h>
#include <stdlib.h>

typedef struct Meeting
{
    unsigned int start;
    unsigned int end;
} Meeting;

int compareMeeting(Meeting *a, Meeting *b);

int main(void)
{
    int N;
    Meeting *meetings;
    int lastMeeting = 0;
    int result = 1;

    // Get input
    scanf("%d", &N);
    meetings = malloc(sizeof(Meeting) * (N));
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &((meetings + i)->start), &((meetings + i)->end));
    }

    // Sort the array
    qsort(meetings, N, sizeof(Meeting), compareMeeting);

    /*
    for (int i = 0; i < N; i++)
    {
        printf("%d : %u %u\n", i, meetings[i].start, meetings[i].end);
    }
    */

    // Greedily select meetings
    for (int i = 1; i < N; i++)
    {
        if (meetings[i].start >= meetings[lastMeeting].end)
        {
            lastMeeting = i;
            result++;
        }
    }

    // Print the result
    printf("%d", result);

    // Free allocation
    free(meetings);

    return 0;
}

int compareMeeting(Meeting *a, Meeting *b)
{
    // Sort by nding time
    if (a->end != b->end)
    {
        return a->end - b->end;
    }
    // If the ending time is same, sort by starting time
    return a->start - b->start;
}