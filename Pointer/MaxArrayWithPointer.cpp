#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5, 1, 4, 2};
    int *p = arr;
    cout << *p;
    int max = *p;
    for (int i = 0; i < 7; i++)
    {
        if (max < (*(p + i)))
        {
            max = (*(p + i));
        }
    }
    cout << max;
}