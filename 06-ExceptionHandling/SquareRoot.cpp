#include <iostream>
#include <cmath> // For sqrt
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0)
            throw "Square root of a negative number is not defined!";
        
        cout << "Square root: " << sqrt(number) << endl;
    } 
    catch (const char* errorMessage) {
        cout << errorMessage << endl;
    }

    return 0;
}
