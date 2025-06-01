#include <iostream>
using namespace std;
void table()
{
    int arr[5];
    cout << "Enter 5 numbers to Calculate their multiplication tables: " << endl;
    ;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Multiplication Table for " << arr[i] << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
    }
}
int main()
{
    table();
    return 0;
}
