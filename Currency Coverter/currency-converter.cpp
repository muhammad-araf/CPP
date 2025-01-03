#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {
    cout << "Currency Converter" << endl;
    cout << "------------------" << endl;
    cout << "1. USD to PKR" << endl;
    cout << "2. PKR to USD" << endl;
    cout << "3. EUR to PKR" << endl;
    cout << "4. PKR to EUR" << endl;
    cout << "5. GBP to PKR" << endl;
    cout << "6. PKR to GBP" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}

double convertCurrency(double amount, double rate) {
    return amount * rate;
}

int main() {
    int choice;
    double amount, convertedAmount;

    // Conversion rates (you can update these rates as needed)
    const double USD_TO_PKR = 280.0;
    const double EUR_TO_PKR = 300.0;
    const double GBP_TO_PKR = 350.0;

    do {
        showMenu();
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        cout << "Enter the amount to convert: ";
        cin >> amount;

        switch (choice) {
            case 1:
                convertedAmount = convertCurrency(amount, USD_TO_PKR);
                cout << fixed << setprecision(2) << "$" << amount << " = Rs." << convertedAmount << endl;
                break;
            case 2:
                convertedAmount = convertCurrency(amount, 1 / USD_TO_PKR);
                cout << fixed << setprecision(2) << "Rs." << amount << " = $" << convertedAmount << endl;
                break;
            case 3:
                convertedAmount = convertCurrency(amount, EUR_TO_PKR);
                cout << fixed << setprecision(2) << "€" << amount << " = Rs." << convertedAmount << endl;
                break;
            case 4:
                convertedAmount = convertCurrency(amount, 1 / EUR_TO_PKR);
                cout << fixed << setprecision(2) << "Rs." << amount << " = €" << convertedAmount << endl;
                break;
            case 5:
                convertedAmount = convertCurrency(amount, GBP_TO_PKR);
                cout << fixed << setprecision(2) << "£" << amount << " = Rs." << convertedAmount << endl;
                break;
            case 6:
                convertedAmount = convertCurrency(amount, 1 / GBP_TO_PKR);
                cout << fixed << setprecision(2) << "Rs." << amount << " = £" << convertedAmount << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
