#include <iostream>  
using namespace std;
void modifyValue(int &x)
{
    x += 10; // Add 10 to the value of x
}

int main()
{
    int num = 5; // Initialize an integer variable with value 5

    // Call the modifyValue function with num as the argument (passed by reference)
    modifyValue(num);

    // Print the value of num after modification; it should be updated
    cout << "After modification: " << num << endl;

    return 0;
}
