#include<stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
     int arr[] = {1, 3, 5, 6, 4, 9, 11};
     int size = sizeof(arr)/sizeof(int);
     int element = 12;
     int searchIndex = LinearSearch(arr, size, element);
     printf("The element %d was found at index %d \n", element, searchIndex);
     return 0;
}