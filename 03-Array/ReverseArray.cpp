#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5];
    int j = 4;
    for (int i = 0; i < 5; i++)
    {
        arr1[j] = arr[i];
        j--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
}