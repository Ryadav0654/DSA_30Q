# Array

### Question 1-

This problem is also the same as the famous “Dutch National Flag problem”. The
problem was proposed by Edsger Dijkstra. The problem is as follows:

Given N balls of colour red, white or blue arranged in a line in random
order. You have to arrange all the balls such that the balls with the same colours are adjacent
with the order of the balls, with the order of the colours being red, white and blue (i.e., all red
coloured balls come first then the white coloured balls and then the blue coloured balls).

## Code
```c
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

```

### Question 2-

Given two arrays, arr1 and arr2 of equal length N, the task is to find if the given arrays are equal or not.

Two arrays are said to be equal if:

● both of them contain the same set of elements,

● arrangements (or permutations) of elements might/might not be same.

● If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

## Code 
```C 
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

```

### Question 3-

Given the arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station so that no train waits. We are given two arrays that represent the arrival and departure times of trains that stop.

## Code
```C

```

### Question 4-

Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.

### Question 5-

Given an array of N numbers and a positive integer K. The problem is to find K numbers with the most occurrences, i.e., the top K numbers having the maximum frequency.

If two numbers have the same frequency then the number with a larger value should be given preference. The numbers should be displayed in decreasing order of their frequencies. It is assumed that the array consists of at least K numbers.

### Question 7-

Write a code to get an array as input from the user and use linear search to search for an element. Also write it’s time complexity.

## Code
```C
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

```

### Question 8-

Write a code to get an array as input from the user and use binary search to search for an element. Also write it’s time complexity.

### Question 9-

Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and use
only constant memory space.

### Question 10-

Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
