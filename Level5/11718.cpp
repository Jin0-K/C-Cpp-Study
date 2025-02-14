#include <iostream>
#include <string>
#define MAX_LINE 100

using namespace std;

int main(void)
{
    string line;
    int count = 0;

    while (count++ < MAX_LINE)
    {
        getline(cin, line);
        cout << line << endl;
    }

    return 0;
}