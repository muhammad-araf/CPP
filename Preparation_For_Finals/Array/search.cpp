#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 6, 5, 6};
    int search;
    bool condi = false;
    cout << "Enter the number you want to search: ";
    cin >> search;
    for (int i = 0; i < 5; i++)
    {
        if (search == arr[i])
        {
            condi = true;
        }
    }
    if (condi == true)
    {
        cout << "Founded..!";
    }
    else
    {
        cout << "Not Found..!";
    }

    return 0;
}