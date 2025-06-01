#include <iostream>
using namespace std;
int pointer(int *p)
{
    int min = *(p + 0);
    for (int i = 0; i < 5; i++)
    {
        if (min < *(p + i))
        {
            min = *(p + i);
        }
    }
    return min;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr;
    int min = pointer(p);
    cout << min;
    return 0;
}
