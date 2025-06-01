#include <iostream>  
using namespace std; 
int returnInt()
{
    return 42; // Return a fixed integer value
}
double returnDouble()
{
    return 3.14; // Return a fixed double value
}
void returnVoid()
{
    cout << "This is a void function." << endl; // Print a message
}

int main()
{
    // Call returnInt() and display its return value
    cout << "Int: " << returnInt() << endl;

    // Call returnDouble() and display its return value
    cout << "Double: " << returnDouble() << endl;

    // Call returnVoid() to execute its message-printing functionality
    returnVoid();

    return 0; 
}
