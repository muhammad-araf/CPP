#include <iostream>  
using namespace std; 
int product(int a, int b)
{
    return a * b; // Return the multiplication of the two integers
}

int main()
{
    // Call the product function with arguments 4 and 5, and print the result
    cout << "Product: " << product(4, 5) << endl;

    return 0;
}
