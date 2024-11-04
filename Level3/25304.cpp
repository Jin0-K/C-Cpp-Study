#include <iostream>

using namespace std;

int main(void) {
    int X, N, a, b;
    int result{0};
    cin >> X >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        result += a*b;
    }
    if (result == X) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}