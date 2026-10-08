#include <iostream>
using namespace std;

int main() {
    int i, n, sum = 0;
    cout << "Enter the number of integers: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "The sum of the first " << n << " integers is " << sum << endl;
    return 0;
}
