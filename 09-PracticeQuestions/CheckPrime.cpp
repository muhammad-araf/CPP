#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number; ";
    cin >> num;
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "The Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }

    return 0;
}
