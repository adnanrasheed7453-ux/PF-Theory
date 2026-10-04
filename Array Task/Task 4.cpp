#include <iostream>
using namespace std;

int main()
{
    int arr[10], num;
    bool found = false;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            cout << "Number found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Number not found.";

    return 0;
}
