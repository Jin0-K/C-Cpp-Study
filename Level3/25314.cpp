#include <iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;

    while (N > 0) {
        cout << "long ";
        N -= 4;
    }
    cout << "int" << endl;
    
    return 0;
}