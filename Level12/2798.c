// https://www.acmicpc.net/problem/2798
#include <stdio.h>
#include <stdlib.h>

int cards_sum(int *cards)
{
    return *cards + *(cards + 1) + *(cards + 2);
}

int main(void)
{
    /*
    N: The number of cards
    M: The given number
    */
    int N, M;
    int *cards;
    int chosen_cards[3] = {0, 0, 0};
    int comparison[3];
    scanf("%d %d", &N, &M);

    // Get the information of the cards
    cards = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", cards + i);
    }

    // Select three cards which sum is closest to M
    for (int i = 0; i < N - 2; i++)
    {
        comparison[0] = cards[i];
        for (int j = i + 1; j < N - 1; j++)
        {
            comparison[1] = cards[j];
            for (int k = j + 1; k < N; k++)
            {
                comparison[2] = cards[k];
                if ((cards_sum(comparison) <= M) && (cards_sum(chosen_cards) < cards_sum(comparison)))
                {
                    chosen_cards[0] = comparison[0];
                    chosen_cards[1] = comparison[1];
                    chosen_cards[2] = comparison[2];
                }
            }
        }
    }

    // Print the sum of the chosen cards
    printf("%d\n", cards_sum(chosen_cards));

    return 0;
}