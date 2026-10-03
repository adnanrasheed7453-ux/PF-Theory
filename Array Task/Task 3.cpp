#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    double average;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (double)sum / 10;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
