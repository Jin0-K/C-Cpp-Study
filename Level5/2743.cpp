#include <iostream>

using namespace std;

int main(void)
{
    char string[101];
    int len = 0, i = 0;

    // Get Input
    cin >> string;

    while (string[i++] != '\0')
    {
        len++;
    }

    // Print Output
    cout << len << endl;

    return 0;
}