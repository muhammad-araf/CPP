#include <iostream>
using namespace std;

int main()
{
    int previousReading, currentReading, unitsConsumed;
    float costPerUnit, grossBill, netBill;

    cout << "Enter previous meter reading: ";
    cin >> previousReading;
    cout << "Enter current meter reading: ";
    cin >> currentReading;
    unitsConsumed = currentReading - previousReading;

    if (unitsConsumed <= 300)
    {
        grossBill = unitsConsumed * 4;
        netBill = grossBill - (grossBill * 0.03); // 3%
    }
    else if (unitsConsumed <= 400)
    {
        grossBill = unitsConsumed * 6;
        netBill = grossBill;
    }
    else
    {
        grossBill = unitsConsumed * 7;
        netBill = grossBill + (grossBill * 0.04); // 4%
    }

    cout << "Total units consumed: " << unitsConsumed << " units" << endl;
    cout << "Gross bill: Rs. " << grossBill << endl;
    cout << "Net bill after adjustments: Rs. " << netBill << endl;

    return 0;
}
