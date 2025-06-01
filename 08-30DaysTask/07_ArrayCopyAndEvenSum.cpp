#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    for (int k = 0; k <= 2; k++)
    {
        cout << "Enter The " << k + 1 << " Term: ";
        cin >> arr[k];
    }
    int arr1[3];
    int sum = 0;
    for (int i = 0; i <= 2; i++)
    {
        arr1[i] = arr[i];
    }
    for (int j = 0; j <= 2; j++)
    {
        if (arr1[j] % 2 == 0)
        {
            sum += arr1[j];
        }
    }
    cout << "The sum of All Even Terms Of Array Is: " << sum;
    return 0;
}