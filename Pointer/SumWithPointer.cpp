#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2;

    cout << "Enter the first number: ";
    cin >> *ptr1;

    cout << "Enter the second number: ";
    cin >> *ptr2;

    sum = *ptr1 + *ptr2;

    cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is " << sum << "." << endl;

    return 0;
}
