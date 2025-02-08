#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    int *ptr = arr;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
        sum += *(ptr + i);
    }

    int avg = sum / 5;
    cout << "The average is: " << avg << endl;

    return 0;
}
