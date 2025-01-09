#include <iostream>
using namespace std;
int numbers[10] = {2, 4, 7, 9, 11, 13, 15, 17, 19, 20};
int sumOfPrimes()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        bool isPrime = true;
        if (numbers[i] <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j < numbers[i]; j++)
            {
                if (numbers[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            sum += numbers[i];
        }
    }
    return sum;
}

int main()
{
    int primeSum = sumOfPrimes();

    cout << "The sum of prime numbers in the array is: " << primeSum << endl;

    return 0;
}
