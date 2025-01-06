#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int num;

    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        generateFibonacci(num);
    }

    return 0;
}
