#include <iostream> 
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;                // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1); // Recursive case: multiply n with the factorial of (n-1)
}

int main()
{
    // Call the factorial function with 5 as the argument and print the result
    cout << "Factorial of 5: " << factorial(5) << endl; // Expected output: 120

    return 0;
}
