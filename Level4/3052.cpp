#include <iostream>
#include <stdbool.h>
#define DIVNUM 42
#define INPUT_COUNT 10

using namespace std;

int main(void)
{
    bool *remainder = (bool *)calloc(DIVNUM, sizeof(bool) * DIVNUM);
    int num;
    int count = 0;

    for (int i = 0; i < INPUT_COUNT; i++)
    {
        cin >> num;
        remainder[num % DIVNUM] = true;
    }

    for (int i = 0; i < DIVNUM; i++)
    {
        if (remainder[i])
        {
            count++;
        }
    }

    cout << count << endl;

    free(remainder);

    return 0;
}