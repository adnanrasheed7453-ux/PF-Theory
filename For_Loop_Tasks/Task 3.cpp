#include <iostream>
using namespace std;

int main() {
    int i, x, sum = 0;
    float avg;

    cout << "Enter 5 numbers:" << endl;
    for (i = 1; i <= 5; i++) {
        cin >> x;
        sum = sum + x;
    }

    avg = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
