#include <iostream>
#define NUM 9

using namespace std;

int main()
{
    int count = 1;
    int n;
    int max[2] = {0, 1};

    while (count <= NUM)
    {
        cin >> n;
        if (max[0] < n)
        {
            max[0] = n;
            max[1] = count;
        }
        count++;
    }

    cout << max[0] << "\n"
         << max[1] << endl;

    return 0;
}