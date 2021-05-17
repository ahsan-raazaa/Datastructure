#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty (struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(struct stack* sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if(arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    } 
    else
    {
        return sp->arr[arrayInd];
    }
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if(isFull(ptr))
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp)
{
    return sp->arr[0];
}


int main()
{
    //struct stack s;
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    s->arr[0] = 10;
    s->top = s->top++;
    
    push(s, 4);
    push(s, 1);
    push(s, 2);
    printf("The stack is empty %d\n" ,isFull(s));
    printf("The stack is not empty %d\n", isEmpty(s));
    printf("Popped %d from the stack\n", pop(s));

    for(int i = 0 ; i < s->top +1 ; i++)
    {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    printf("Topmost %d \n", stackTop(s));
    printf("Bottommost %d \n", stackBottom(s));
    return 0;
} 