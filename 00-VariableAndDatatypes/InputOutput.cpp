#include <iostream>
using namespace std;
int main() {
    int number;
    string name;
    cout << "Enter a number: ";  // Input a number
    cin >> number;
    cout << "Enter your name: "; // Input a string
    getline(cin, name);

    cout << "Hello, " << name << "! You entered the number " << number << "." << endl;

    return 0;
}
