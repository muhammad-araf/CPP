#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a Number that store in a variable ";
    cin >> a;
    cout << "Enter a Number that store in b variable ";
    cin >> b;
    // Swap values
    a = a + b; // a = 15
    b = a - b; // b = 5
    a = a - b; // a = 10

    cout << "a = " << a << ", b = " << b << endl; // Output:  a= 10, b = 5
    return 0;
}
