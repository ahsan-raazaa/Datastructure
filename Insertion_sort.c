// Insertion sort in C
#include<stdio.h>

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while(key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int data[] = {9, 4, 2, 10, 0};
    int size = sizeof(data) /sizeof(data[0]);
    insertionSort(data, size);
    printf("Sorted Array \n");
    printArray(data, size);
}