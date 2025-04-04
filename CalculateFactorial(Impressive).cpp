#include <iostream>
using namespace std;
int main() {
    int n, f = 1, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (; i <= n; f *= i, i++);
    cout << "Factorial: " << f << endl;
    return 0;
}
