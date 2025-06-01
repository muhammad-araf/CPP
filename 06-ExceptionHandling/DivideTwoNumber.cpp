#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    
    cout << "Enter numerator: ";
    cin >> numerator;
    
    cout << "Enter denominator: ";
    cin >> denominator;
    
    try {
        if (denominator == 0)
            throw "Division by zero is not allowed!";
        
        cout << "Result: " << numerator / denominator << endl;
    } 
    catch (const char* errorMessage) {
        cout << errorMessage << endl;
    }
    
    return 0;
}
