#include <iostream>
using namespace std;

int main()
{
    double alpha[50];

    for (int i = 0; i < 25; i++)
        alpha[i] = i * i;

    for (int i = 25; i < 50; i++)
        alpha[i] = i * 3;

    cout << "Array Elements:\n";
    for (int i = 0; i < 50; i++)
        cout << alpha[i] << " ";

    return 0;
}
