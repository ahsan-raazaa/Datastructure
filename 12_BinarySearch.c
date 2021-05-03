#include<stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    // Sorted array for binary tree
     int arr[] = {1, 3, 5, 6, 19, 99, 111};
     int size = sizeof(arr)/sizeof(int);
     int element = 19;
     int searchIndex = BinarySearch(arr, size, element);
     printf("The element %d was found at index %d \n", element, searchIndex);
     return 0;
}