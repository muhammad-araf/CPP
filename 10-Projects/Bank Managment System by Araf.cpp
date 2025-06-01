#include <iostream>
using namespace std;

int main()
{
    int balance = 100, menu, amount;

    cout << "Welcome to ARAF Bank Management System\n";

    do
    {
        cout << "\nMENU\n";
        cout << "1. View Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "Current Balance: $" << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: $";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Your new balance is: $" << balance << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Your new balance is: $" << balance << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient funds" << endl;
            }
            else
            {
                cout << "Invalid amount" << endl;
            }
            break;

        case 4:
            cout << "Thank you for using the ARAF Bank Management System" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (menu != 4);

    return 0;
}
