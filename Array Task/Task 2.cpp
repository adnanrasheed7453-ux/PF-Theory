#include <iostream>
using namespace std;

int main()
{
    int arr[10], max;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    max = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Largest Number = " << max;

    return 0;
}
