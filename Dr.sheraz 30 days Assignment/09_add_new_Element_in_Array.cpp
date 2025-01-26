#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n; // n = 3;
    //------------------------
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int insert;
    cout << "Enter the elements of insert new value in array: ";
    cin >> insert;
    arr[n] = insert;
    //----------------------------------------------
    n++; // n = no of element in array n = 4;
    for (int i = n - 1; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " Element in array : ";
        cout << arr[i] << endl;
    }
    return 0;
}
