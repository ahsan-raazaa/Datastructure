#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
};

void linkedListTraversal(struct Node* ptr)
{
    int flag = 0;
    struct Node * temp = (struct Node*) malloc(sizeof(struct Node));

    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        temp = ptr;
        ptr = ptr->next;
    }

    printf("Traverse Backwards\n");

    while(temp !=NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->prev;
    }

}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 8;
    head->next = second;

    second->prev = head;
    second->data = 9;
    second->next = third;

    third->prev = second;
    third->data = 10;
    third->next = NULL;

    linkedListTraversal(head);
}