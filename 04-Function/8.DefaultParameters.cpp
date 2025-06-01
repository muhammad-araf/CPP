#include <iostream> 
using namespace std; 
void greet(string name = "Guest")
{
    cout << "Hello, " << name << "!" << endl; // Print a greeting message with the given or default name
}

int main()
{
    // Call the greet function without any arguments; uses the default value "Guest"
    greet();

    // Call the greet function with "SHU" as the argument
    greet("SHU");

    return 0;
}
