#include <iostream>

using namespace std;

int main(void)
{
    int N, M = 0;
    int score;
    double mean = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> score;
        if (score > M)
        {
            M = score;
        }
        mean += score;
    }

    mean = mean / M * 100 / N;
    cout << mean << endl;

    return 0;
}