#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int choice;
    int bill = 0;
    do
    {
        cout << setw(3) << "MENU" << endl;
        cout << setw(3) << "1.TEA (price: 2$)" << endl;
        cout << setw(3) << "2.Coffee (Coffee: 3$)" << endl;
        cout << setw(3) << "3.Sandwich (price: 5$)" << endl;
        cout << setw(3) << "4.Burger (price: 7$)" << endl;
        cout << setw(3) << "5.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Your order has been added";
            cout << "\nAdd your next order" << endl;
            bill = bill + 2;
            break;
        case 2:
            cout << "Your order has been added";
            cout << "\nAdd your next order" << endl;
            bill = bill + 3;
            break;
        case 3:
            cout << "Your order has been added";
            cout << "\nAdd your next order" << endl;
            bill = bill + 5;
            break;
        case 4:
            cout << "Your order has been added";
            cout << "\nAdd your next order" << endl;
            bill = bill + 7;
            break;
        case 5:
            cout << "Thanks for using our Service";
            break;

        default:
            cout << "PLease input between 1 to 4 " << endl;
            break;
        }
    } while (choice != 5);

    cout << "Your Bill is: " << bill << "$";

    return 0;
}