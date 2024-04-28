#include<stdio.h>
#include<stdlib.h>
int repeatingElement(int *arr, int size){
     
    for(int i=0;i<size;i++){
        int index=arr[i]%size;
        arr[index]+=size;
    }
    for(int i=0;i<size;i++){
        if(arr[i]/size>=2){
            printf("%d ",i);
        }
    }
     
  
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
    repeatingElement(arr,n);

   

    return 0;
}
