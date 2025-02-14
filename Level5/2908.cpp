#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string board;
    int *nums = (int *)calloc(2, sizeof(int) * 2);
    int n = 0;

    getline(cin, board);

    for (int i = board.length() - 1; i >= 0; i--)
    {
        if (board[i] == ' ')
        {
            n++; // set n to 1
            continue;
        }
        nums[n] = nums[n] * 10 + (board[i] - '0');
    }

    if (nums[0] > nums[1])
    {
        cout << nums[0] << endl;
    }
    else
    {
        cout << nums[1] << endl;
    }

    return 0;
}