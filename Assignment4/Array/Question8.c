#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int arr[], int size, int key){

    int s = 0;
    int e = size -1;
    int m = s+(e-s)/2;

    while( s <= e){

        if(arr[m] == key){
            return 1;
        }else if(arr[m] < key){
            s = m + 1;
        }else{
            e = m - 1;
        }

        m = s+(e-s)/2;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the element of arr1: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the search element or key: ");
    scanf("%d", &key);

    int ans = BinarySearch(arr, n, key);
    if(ans){
        printf("key is present.\n");

    }else{
        printf("key is not present.\n");
    }

    return 0;
}
