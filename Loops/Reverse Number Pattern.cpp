#include<iostream>
#include<iomanip>
using namespace std;
	int main() {
	int num;
	cout << "Enter a number to display a reverse number pattern" << endl;
	cin >> num;
	for (int i = num;i >= 0;i--) {
		
		for (int j = i;j >= 1;j--) {
			cout << num;
		}
		num--;
		cout << i << endl;
	}
	return 0;
}