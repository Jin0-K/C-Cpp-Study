#include <iostream>

using namespace std;

int findMax(int *dices)
{
    if (dices[0] > dices[1] && dices[0] > dices[2])
    {
        return dices[0];
    }
    if (dices[1] > dices[2])
    {
        return dices[1];
    }
    return dices[2];
}

int twoAreSame(int diceNum)
{
    return 1000 + diceNum * 100;
}

int main(void)
{
    int dice[3];
    int prize;
    cin >> dice[0] >> dice[1] >> dice[2];

    if (dice[0] == dice[1])
    {
        if (dice[0] == dice[2])
        {
            prize = 10000 + dice[0] * 1000;
        }
        else
        {
            prize = twoAreSame(dice[0]);
        }
    }
    else if (dice[0] == dice[2])
    {
        prize = twoAreSame(dice[0]);
    }
    else
    {
        if (dice[1] == dice[2])
        {
            prize = twoAreSame(dice[1]);
        }
        else
        {
            prize = findMax(dice) * 100;
        }
    }

    cout << prize << endl;

    return 0;
}