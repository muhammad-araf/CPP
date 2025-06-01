#include <iostream> 
using namespace std;
int add(int a, int b)
{
    return a + b; // Return the sum of the two integers
}
double add(double a, double b)
{
    return a + b; // Return the sum of the two doubles
}

int main()
{
    // Call the add function with integer arguments (3, 7) and print the result
    cout << "Sum of integers: " << add(3, 7) << endl;

    // Call the add function with double arguments (3.5, 2.5) and print the result
    cout << "Sum of doubles: " << add(3.5, 2.5) << endl;

    return 0;
}
