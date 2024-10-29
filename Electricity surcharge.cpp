#include <iostream>
using namespace std;
int main()
{
    int pay1;
    int lastpay;
    int lastpay1;
    int lastpay2;
    cout << "*** Note ***\n If your unit is greater than 200 then 2% tax add in your bill\n Unit = 7 Rupees\n"
         << "Enter your Electricity bill unit :";
    cin >> pay1;

    if (pay1 >= 200)
    {
        lastpay = pay1 * 0.02;
        lastpay1 = pay1 + lastpay;
        lastpay2 = lastpay1 * 7;

        cout << "Your Bill with tax is " << lastpay << " + " << pay1 << " = " << lastpay1 << "Unit = " << lastpay2 << " Rupees";
    }
    else
    {
        cout << "There is no surcharge in you bill";
    }

    return 0;
}
