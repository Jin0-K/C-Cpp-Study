#include <iostream>

using namespace std;

int main(void) {
    int n;
    int result{0};
    cin >> n;

    while (n) {
        result += n;
        n--;
    }
    cout << result << endl;
    
    return 0;
}