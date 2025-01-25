#include <iostream>
using namespace std;

int main()
{
    //************ Take input of Arr 1 *************
    int len1;
    cout << "Input the number of elements to be stored in the first array : ";
    cin >> len1;
    cout << "Input " << len1 << " elements in the array : " << endl;
    int arr[100];
    for (int i = 0; i < len1; i++)
    {
        cout << "element - " << i << " ";
        cin >> arr[i];
    }

    //************ Take input of Arr 2 (same as Arr 1 )*************
    int len2;
    cout << "Input the number of elements to be stored in the first array : ";
    cin >> len2;
    cout << "Input " << len2 << " elements in the array : " << endl;
    int arr2[100];
    for (int i = 0; i < len2; i++)
    {
        cout << "element - " << i << " ";
        cin >> arr2[i];
    }
    //************ Arr 3 for merging *************
    int arr3[100];
    for (int i = 0; i < len1; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = 0; i < len1; i++)
    {
        arr3[len1 + i] = arr2[i];
    }

    //************ Arr 3 Descending order  *************
    for (int j = (len1 + len2) - 1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr3[i] > arr3[i + 1])
            {
                int temp = arr3[i];
                arr3[i] = arr3[i + 1];
                arr3[i + 1] = temp;
            }
        }
    }
    cout << "The merged array in Descending order is : " << endl;
    for (int i = 0; i < (len1 + len2); i++)
    {
        cout << arr3[i];
    }

    return 0;
}