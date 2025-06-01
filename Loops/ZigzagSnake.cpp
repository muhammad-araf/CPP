#include <iostream>
using namespace std;

int main() {
    int n = 5, num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= n; j++) {
                cout << num++ << " ";
            }
        } else {
            int temp = num + n - 1;
            for (int j = 1; j <= n; j++) {
                cout << temp-- << " ";
            }
            num += n;
        }
        cout << endl;
    }
    return 0;
}
