#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int marks;
	cout << "NOTE: If you want to come out from loop then input in marks 101" << endl;
	do {
		cout << "Enter your marks to calculate your Grade" << endl;
		cin >> marks;
		if (marks > 0 && marks < 100) {
			if (marks >= 90 && marks < 100) {
				cout << "A" << endl;
			}
			else if (marks > 80 && marks < 89) {
				cout << "B" << endl;
			}
			else if (marks >= 70 && marks < 79) {
				cout << "C" << endl;
			}
			else if (marks >= 60 && marks < 69) {
				cout << "D" << endl;
			}
			
			else {
				cout << "Fail F" << endl;
			}
		}
		else if (marks == 101) {
			cout << "Thanks for using our grading calculator";
		}
		else {
			cout << "PLease input yout correct marks" << endl;
		}


	} while (marks != 101);
	return 0;
}