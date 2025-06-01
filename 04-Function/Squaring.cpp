#include <iostream>
using namespace std;
int square(int num) {
    return num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = square(number);
    cout << "The square of " << number << " is: " << result << endl;

    return 0;
}