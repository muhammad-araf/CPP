#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        goto error; 
    }

    cout << "You entered a positive number: " << number << endl;
    goto end; 

error:
    cout << "Error: You entered a negative number!" << endl;

end:
    cout << "Program terminated." << endl;

    return 0;
}
