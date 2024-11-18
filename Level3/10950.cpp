#include <iostream>

using namespace std;

int main(void) {
    int T, A, B;
    cin >> T;

    for (int testcase = 1; testcase <= T; testcase++) {
        cin >> A;
        cin >> B;
        cout << A+B << endl;
    }
    
    return 0;
}