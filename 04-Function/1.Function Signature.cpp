#include <iostream>  // Include the input-output stream library
using namespace std;
// Function to display an integer
void display(int x)
{
    cout << "Integer: " << x << endl; // Print the integer value
}
// Function to display a double
void display(double x)
{
    cout << "Double: " << x << endl; // Print the double value
}

int main()
{
    // Call the display function with an integer argument
    display(5);

    // Call the display function with a double argument
    display(3.142);

    return 0; 
}
