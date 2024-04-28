#include<stdio.h>
#include<stdlib.h>

int isPresent(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
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

    int ans = isPresent(arr, n, key);
    if(ans){
        printf("key is present.\n");

    }else{
        printf("key is not present.\n");
    }

    return 0;
}
