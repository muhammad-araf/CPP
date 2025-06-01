#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int insert;
    printf("Enter the new value to insert into the array: ");
    scanf("%d", &insert);

    arr[n] = insert;
    n++;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d Element in array: %d\n", i, arr[i]);
    }

    return 0;
}
