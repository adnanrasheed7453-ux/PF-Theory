#include <iostream>
using namespace std;

int main() {
    int i, x, zeros = 0, evens = 0, odds = 0;

    cout << "Please enter 20 integers:" << endl;

    for (i = 1; i <= 20; i++) {
        cin >> x;
        if (x % 2 == 0) {
            evens++;
            
            if (x == 0) {
                zeros++;
            }
        } else {
            odds++;
        }
    }

    cout << "Zeros: " << zeros << endl;
    cout << "Even numbers: " << evens << endl;
    cout << "Odd numbers: " << odds << endl;

    return 0;
}
