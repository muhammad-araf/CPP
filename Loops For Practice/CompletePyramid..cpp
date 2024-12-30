#include <iostream>
using namespace std;

int main() {
    int c = 5; 
    for (int i = 1; i <= c; i++) {
        
        for (int j = 1; j <= c - i; j++) {
            cout << " ";
        }
       
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

