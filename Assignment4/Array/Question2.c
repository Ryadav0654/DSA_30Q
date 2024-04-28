#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int isArrayEqual(int arr1[], int arr2[], int size)
{

    sortArray(arr1, size);
    sortArray(arr2, size);
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));

    printf("Enter the element of arr1: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the element of arr2: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int ans = isArrayEqual(arr1, arr2, n);
    if (ans)
    {
        printf("arr1 and arr2 are equal\n");
    }
    else
    {
        printf("arr1 and arr2 are not equal \n");
    }

    free(arr1);
    free(arr2);
    return 0;
}
