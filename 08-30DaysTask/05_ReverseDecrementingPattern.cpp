#include <iostream>
using namespace std;
int main()

{

    int n;
    int i = 5;
    do
    {
        int j = 1;

        n = i;
        do
        {

            cout << n;
            n--;

            j++;
        } while (j <= i);
        cout << endl;

        i--;
    } while (i >= 1);

    return 0;
}