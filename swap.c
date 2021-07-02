#include<stdio.h>
#include<stdlib.h>

void ssort(int arr[],int len)
{
    
    for(int i=0; i<len; i++)
    {
        swap_max(arr, len, i);
    }
}

void swap_max(int arr[], int len, int num)
{
    int k;
    int temp;

    for(int j = k = num; j<len; j++)
    {
        if(arr[j] > arr[k])
        {
            k = j;
        }
    }

    temp = arr[num];
    arr[num] = arr[k];
    arr[k] = temp;
}
