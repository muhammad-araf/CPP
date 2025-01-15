#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Note: If you want to come out of the loop Enter 0" << endl;
    cout << "Enter a number to check it is even or odd" << endl;
    int num;
    do
    {
        cin >> num;
        if (num == 0)
        {
            cout << "you come out of the loop" << endl;
            break;
        }
        if (num % 2 == 0)
        {

            cout << "the Number is even" << endl;
        }

        else
        {
            cout << "The number is odd";
        }

    } while (num != 0);

    return 0;
}
