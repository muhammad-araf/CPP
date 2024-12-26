#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {

        cout << i << "\t\t " << pow(i, 2) << "\t\t" << pow(i, 3) << endl;
    }
    return 0;
}