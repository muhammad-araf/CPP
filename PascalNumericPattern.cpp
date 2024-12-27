#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}

