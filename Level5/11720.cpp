#include <iostream>

using namespace std;

int main(void)
{
    int N, result = 0;
    string nums;

    cin >> N;
    cin >> nums;

    for (int i = 0; i < N; i++)
    {
        result += nums[i] - '0';
    }

    cout << result << endl;

    return 0;
}