#include <iostream> 
using namespace std;
inline int square(int x)
{
    return x * x; // Return the square of x
}

int main()
{
    // Call the square function with 4 as the argument and print the result
    cout << "Square of 4: " << square(4) << endl;

    return 0;
}
