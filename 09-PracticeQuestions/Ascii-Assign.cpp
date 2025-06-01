#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a single alphabet ";
    cin >> ch;
    cout << "Enter a number that can add in a given alphabet ";
    int no;
    cin >> no;
    cout << "the sum of " << ch << " + " << no << " is : " << (char)(ch + no) << " (ASCII VALUE: " << ch + no << ")";
    return 0;
}
