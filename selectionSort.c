// Selection sort in C
#include<stdio.h>


// function to swap the the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for(int step = 0; step < size - 1; step++)
    {
        int minimum = step;
        for(int i = step + 1; i < size; i++)
        {
            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if(array[i] < array[minimum])
            {
                minimum = i;
            }
        }

        // put min at the correct position
        swap(&array[minimum] , &array[step]);
    }
}

// function to print an array
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {20, 12, 2, 0, 213, -1};
    int size = sizeof(data)/sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in Acending Order:\n");
    printArray(data, size);

}