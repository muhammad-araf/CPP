#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int sum;
    int inp;
    cin >> inp;

    int i = 1;

    while (i <= inp)
    {

        sum = i * i;
        cout << i << " * " << i << "  " << sum << endl;
        i++;
    }
    return 0;
}