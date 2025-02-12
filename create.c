#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *  next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
 
int main()
{
    // Allocate memory for nodes in the linked list in Heap
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 10;
    head->next = second;
 
    // Link second and third nodes
    second->data = 20;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 30;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 40;
    fourth->next = NULL;
 
    linkedListTraversal(head);
    return 0;
}
