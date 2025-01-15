#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i = 1;i <= num;i++) {
		if (num % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}