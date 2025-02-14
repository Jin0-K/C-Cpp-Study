#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string word;
    int time_num, total_time = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        switch (word[i])
        {
        case 'S':
            time_num = 5;
            break;
        case 'V':
            time_num = 6;
            break;
        case 'Y':
        case 'Z':
            time_num = 7;
            break;

        default:
            time_num = (word[i] - 'A') / 3;
            break;
        }
        time_num += 3;
        total_time += time_num;
    }

    cout << total_time << endl;

    return 0;
}