#include <iostream>
#include <cstring>
#define ALPHABET_NUM 26

using namespace std;

int main(void)
{
    string S;
    string alphabet("abcdefghijklmnopqrstuvwxyz");
    int result[ALPHABET_NUM];
    memset(result, -1, sizeof(int) * ALPHABET_NUM);

    // Get input
    cin >> S;

    // Operate
    for (int i = 0; i < alphabet.length(); i++)
    {
        for (int j = 0; j < S.length(); j++)
        {
            if (S[j] == alphabet[i] && result[i] < 0)
            {
                result[i] = j;
                break;
            }
        }
    }

    // Print output
    for (int i = 0; i < ALPHABET_NUM; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}