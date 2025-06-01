#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int sum = 1;
    int inp1;
    cin >> inp1;
    int inp2;
    cin >> inp2;
    for (int i = inp1; i <= inp2; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is Even" << endl;
        }
        else
        {
            sum = (i * sum);
        }
    }
    cout << "the sum of all odd numbers between " << inp1 << " and " << inp2 << " is " << sum;

    return 0;
}