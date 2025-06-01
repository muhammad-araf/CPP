#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 6, 5, 6};
    for (int j = 4; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i];
    }

    return 0;
}