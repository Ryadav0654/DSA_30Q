#include<stdio.h>
#include<stdlib.h>

void ArrangeBall(char arr[], int size){

    int low = 0;
    int mid = 0;
    int high = size -1;

    while (mid <= high)
    {
        
    switch (arr[mid])
    {
    case 'r':
        char temp1 = arr[low];
        arr[low] = arr[mid];
        arr[mid] = temp1;
        low += 1;
        mid += 1;
        break;
    
    case 'w':
        mid += 1;
        break;
    
    case 'b' :
        char temp2 = arr[high];
        arr[high] = arr[mid];
        arr[mid] = temp2;
        high -= 1;
        break;
    }
    }
    
}

void Print(char arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%c\t", arr[i]);
    }
    printf("\n");
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the quantity of Ball: ");
    scanf("%d", &n);

    char *arr = (char*)malloc(n*(sizeof(char)));
    printf("Enter the color of the each ball(small character): \n");

    for(int i = 0; i < n; i++){
        scanf(" %c", &arr[i]);
    }

    printf("before arrangement: \n");
    Print(arr, n);
    ArrangeBall(arr, n);

    printf("After arrangement:\n ");
    Print(arr, n);


    free(arr);
    return 0;
}
