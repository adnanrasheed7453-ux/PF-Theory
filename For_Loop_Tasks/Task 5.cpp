#include <iostream>
using namespace std;

int main() {
    int n, i;
    int a = 0, b = 1, current;

    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    if (n == 1) current = a;
    else if (n == 2) current = b;
    else {
        for (i = 3; i <= n; i++) {
            current = a + b;
            a = b;
            b = current;
        }
    }
    cout << "The " << n << "th Fibonacci number is " << current << endl;
    return 0;
}
