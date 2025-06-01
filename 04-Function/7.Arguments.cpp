#include <iostream> 
using namespace std;
void printMessage(string message)
{
    cout << message << endl; // Print the message followed by a newline
}

int main()
{
    // Call the printMessage function with "Hello, SHU!" as the argument
    printMessage("Hello, SHU!");

    // Call the printMessage function with "C++ is Very Hard to Learn!" as the argument
    printMessage("C++ is Very Hard to Learn!");

    return 0; 
}
