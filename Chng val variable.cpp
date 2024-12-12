#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 5;
    b = 10;
    // Swap values
    a = a + b; // a = 15
    b = a - b; // b = 5
    a = a - b; // a = 10

    cout << "a = " << a << ", b = " << b << endl; // Output:  a = 10, b = 5
    return 0;
}
