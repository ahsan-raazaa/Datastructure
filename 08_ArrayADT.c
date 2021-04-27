#include<stdio.h>
#include<stdlib.h>

struct SimpleArray
{
    int total_size;
    int Used_size;
    int *ptr   
};

void createArray(struct SimpleArray* a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).Used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize*sizeof(int));

    a->.total_size = tSize;
    a->.Used_size = uSize;
    a->.ptr = (int *) malloc(tSize*sizeof(int));
}

void show(struct SimpleArray* a)
{
    for (int i = 0; i < a-> Used_size; i++)
    {
        printf("%d\n", (a->ptr)[i])
    }
}

void setVal(struct SimpleArray* a)
{
    int n;
    for (int i = 0; i < a-> Used_size; i++)
    {
        printf("Enter elment %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main()
{
    struct SimpleArray marks;
    createArray(&marks, 100, 20);
    printf("Running SetVal \n");
    setVal(&marks);
    printf("Running Show \n");
    show(&marks);
    return 0;
}