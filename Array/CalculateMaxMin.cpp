#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 6, 5, 6};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
    return 0;
}