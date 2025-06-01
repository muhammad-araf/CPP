#include <iostream>
using namespace std;

int main() {
    int d = 5; 
    for (int i = 1; i <= d; i++) {
       
        for (int j = 1; j <=  d- i; j++) {
            cout << " ";
        }
       
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == d) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

