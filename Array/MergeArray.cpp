#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 6, 5, 6};
    int arr2[5] = {1, 2, 3, 4, 5};
    int mergeArray[10];
    for (int i = 0; i < 5; i++)
    {
        mergeArray[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        mergeArray[i + 5] = arr2[i];
    }
    for (int i = 0; i < 10; i++)
    {

        cout << mergeArray[i];
    }
    return 0;
}