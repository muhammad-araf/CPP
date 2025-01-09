#include<iostream>
using namespace std;
int main()
{
	int num;
	char choice;
	do {
		srand(time(0));
		int guess = rand() % 100;
		int choice1 = rand() % 75;
		int choice2 = rand() % 25;
		int choice3 = rand() % 50;
		cout << "**** Welcome to Guessing Game ****" << endl << endl;
		cout << "*** Choice are here" << endl;
		cout << "1. " << choice1 << endl;
		cout << "2. " << choice2 << endl;
		cout << "3. " << choice3 << endl;
		cout << "4. " << guess << endl;
		cin >> num;
		if (guess == num) {
			cout << "you Won Computer brain think " << guess << endl;
			cout << "Do you want to continue game? (Y/N)" << endl;
			cin >> choice;
			if (choice == 'N' || choice == 'n') {
				num = -1;
			}

		}
		else {
			cout << "you Lose! Computer brain think " << guess << endl;
			cout << "Do you want to continue game? (Y/N)" << endl;
			cin >> choice;
			if (choice == 'N' || choice == 'n') {
				num = -1;
			}

		}
	} while (num != -1);
	return 0;
}