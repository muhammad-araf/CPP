#include <iostream>  
using namespace std; 
void modifyValue(int x)
{
    x += 10;                                  // Add 10 to the value of x
    cout << "Inside function: " << x << endl; // Print the modified value inside the function
}

int main()
{
    int num = 5; // Initialize an integer variable with value 5

    // Call the modifyValue function with num as the argument
    modifyValue(num);

    // Print the value of num outside the function; it should remain unchanged
    cout << "Outside function: " << num << endl;

    return 0; 
}
