#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum = 0;
    int arr[5][6] = {{1, 2, 3}, {4, 35, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 5 == 0 && arr[i][j] % 7 == 0)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}