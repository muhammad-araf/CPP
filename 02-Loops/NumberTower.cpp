#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        int num = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << num;
            if (j < i) num++;
            else num--;
        }
        cout << endl;
    }
    return 0;
}

