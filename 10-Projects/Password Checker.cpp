#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int pass = 1234;
    int ipass;
    cout << "Enter your password" << endl;
    do
    {
        cin >> ipass;
        if (ipass == pass)
        {
            cout << "Access Granted";
            break;
        }
        else if (n == 0)
        {
            cout << "Access Denied";
            break;
        }
        else
        {

            cout << "Incorrect password try again you have " << n << " Attempt left" << endl;
            n = n - 1;
        }
    } while (n != -1);
    return 0;
}