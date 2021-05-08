#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deleteFirst(struct Node* head)
{
    struct Node * ptr = head;
    head = head-> next;
    free(ptr);
    return head;
}

struct Node * deleteAtIndex(struct Node* head, int Index)
{
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < Index-1; i++)
    {
        p = p->next;
        q = q->next;
    }  
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteAtLast(struct Node* head)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }  
    p->next =NULL;
    free(q);
    return head;
}

struct Node * deleteAtValue(struct Node* head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }  
    if(q->data == value)
    {
         p->next = q->next;
         free(q);
    }
    
    return head;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    
    head->data = 8;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    linkedListTraversal(head);
    //head = deleteFirst(head);
    //head = deleteAtIndex(head, 1);
    //head = deleteAtLast(head);
    head = deleteAtValue(head, 9);
    linkedListTraversal(head);
    return 0;
}
