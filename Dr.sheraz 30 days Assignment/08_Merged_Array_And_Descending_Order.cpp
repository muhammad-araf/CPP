#include <stdio.h>
int main()
{
    //************ Arr 1 *************
    int len1;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &len1);
    printf("Input %d elements in the array : \n", len1);
    int arr[100];
    for (int i = 0; i < len1; i++)
    {
        printf("element - %d ", i);
        scanf("%d", &arr[i]);
    }
    //************ Arr 2 *************
    int len2;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &len2);
    printf("Input %d elements in the array : ", len2);
    int arr2[100];
    for (int i = 0; i < len2; i++)
    {
        printf("element - %d ", i);
        scanf("%d", &arr2[i]);
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
            if (arr3[i] < arr3[i + 1])
            {
                int temp = arr3[i];
                arr3[i] = arr3[i + 1];
                arr3[i + 1] = temp;
            }
        }
    }
    printf("The merged array in Descending order is : \n");
    for (int i = 0; i < (len1 + len2); i++)
    {
        printf("%d", arr3[i]);
    }
    //************ Arr 3 Count Repeating Element in Arr3  *************
    int count = 0;
    for (int i = (len1 + len2) - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr3[i] == arr3[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array is : ");
    printf("%d", count);
}