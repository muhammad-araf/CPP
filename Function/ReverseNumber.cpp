#include <iostream>
using namespace std;
int reverseNumber(int num)
{
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number: " << reverseNumber(num) << endl;

    return 0;
}
