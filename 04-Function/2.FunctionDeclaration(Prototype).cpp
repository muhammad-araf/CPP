#include <iostream>
using namespace std;

void greet(); // Function Declaration

int main()
{
    greet();//function call
    return 0;
}
void greet()
{ // Function Definition
    cout << "Hello, World!" << endl;
}