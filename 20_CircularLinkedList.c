#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* head)
{
    struct Node* ptr = head;

    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    while(ptr != head);
}

struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node* ptr;
    ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head->next;
    ptr->data = data;
    
    while(p->next != head)
    {
        p = p->next; 
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

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
    third->next = head;

    linkedListTraversal(head);
    head = insertAtFirst(head, 100);
    head = insertAtFirst(head, 200);
    linkedListTraversal(head);

    return 0;
}
