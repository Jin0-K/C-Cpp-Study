#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string sentence;
    int word_num = 0, i = 0;

    getline(cin, sentence);

    while (i < sentence.length())
    {
        if (sentence[i] == ' ')
        {
            i++;
            continue;
        }
        // If a word starts
        word_num++;
        while (sentence[i] >= 'A' && sentence[i] <= 'z')
        {
            i++;
        }
    }

    // Print the result
    cout << word_num << endl;

    return 0;
}