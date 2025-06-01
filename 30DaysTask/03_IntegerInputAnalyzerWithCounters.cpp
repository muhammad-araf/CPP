#include <iostream>
using namespace std;
int main()
{
    int n = 0; // for postive
    int m = 0; // for negative

    int inp1;
    do
    {
        cin >> inp1;

        if (inp1 > 0)
        {
            n++;
        }
        else if (inp1 == 0)
        {
            continue;
        }
        else
        {
            m++;
        }

    } while (inp1 != 0);
    cout << "Positive numbers are " << n << endl;
    cout << "negative numbers are " << m;

    return 0;
}