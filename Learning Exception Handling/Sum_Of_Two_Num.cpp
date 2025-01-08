#include <iostream>
using namespace std;
int main()
{
	int num1, num2, sum;
	try
	{
		cout << "Enter the first Integer ";
		if (!(cin >> num1))
		{
			throw "Intput is not integer";
		}

		cout << "Enter the second integer : ";
		if (!(cin >> num2))
		{
			throw "Input is not integer: ";
		}

		sum = num1 + num2;
		cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
	}
	catch (const char *abc)
	{
		cout << "Exception: " << abc << endl;
	}
	return 0;
}