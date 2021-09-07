#include <stdio.h>
#include <stdlib.h>

// Linked List
// struct Node {
//     int data;
//     struct Node * next;
// };

// void linkedListTraversal(struct Node * ptr){
//     while(ptr!=NULL){
//         printf(" Elements : %d\n", ptr->data);
//         ptr=ptr->next;
//     }
// }

// Circular Linked List

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularLinkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;

//     do
//     {
//         printf(" Elements : %d\n", ptr->data);
//         ptr = ptr->next;

//     } while (ptr != head);
// }

// struct Node *circularLinkedListAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     struct Node *p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }
// }

//     struct Node *deleteFirst(struct Node * head){
//         struct Node *ptr= head;
//         head=head->next;
//         free(ptr);
//         return head;
//     }

//        struct Node *deleteAtIndex(struct Node * head, int index){
//         struct Node *p= head;
//         struct Node *q= head->next;
//     for(int i=0; i<index-1; i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
//     }

//         struct Node *deleteAtEnd(struct Node * head){
//         struct Node *p= head;
//         struct Node *q= head->next;
//     while(q->next!=NULL){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=NULL;
//     free(q);
//     return head;
//     }

//  struct Node *deleteAtIndex(struct Node *head, int value){
// struct Node *p= head;
// struct Node *q= head->next;

// while(q->data!=value && q->next!=NULL){
// p=p->next;
// q=q->next;
// }
// if(q->data==value){
// p->next=q->next;
// free(q);

// }
//  return head;

//     }

// struct Node *insertAtFirst(struct Node *head, int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;

// }

// struct Node *insertAtIndex(struct Node *head, int data, int index){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     struct Node *p=head;
//     int i=0;

//     while(i!=index-1){
//         p=p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }

// struct Node *insertAtEnd(struct Node *head, int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
//     struct Node *p=head;

//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

// struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
// ptr->next=prevNode->next;
// prevNode->next=ptr;
// return head;
// }

// int main()
// {

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 11;
//     second->next = third;

//     third->data = 15;
//     third->next = fourth;

//     fourth->data = 18;
//     fourth->next = head;

// linkedListTraversal(head);
// printf("After deletion \n");
// head=insertAtIndex(head,2, 1);
// head=insertAtFirst(head,2);
//  head=insertAtEnd(head,88);
//  head=insertAfterNode(head,second,88);
// head= deleteFirst(head);
// head= deleteAtIndex(head,1);
// head= deleteAtEnd(head);
// head=deleteAtIndex(head,11);
// circularLinkedListTraversal(head);
// head = circularLinkedListAtFirst(head, 43);
// circularLinkedListTraversal(head);
// linkedListTraversal(head);

struct Node
{
    int data; // data
    struct Node *prev;
    struct Node *next;
};

void doublyLinkedListTraversal(struct Node *head)
{
    struct Node *node = head;
    printf("forward traverse\n");
    while (node->next != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
    printf("%d\n", node->data);
    printf("backward traverse\n");
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->prev;
    }
}

int main()
{

    struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;

    N1 = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));

    N1->prev = NULL;
    N1->data = 7;
    N1->next = N2;

    N2->prev = N1;
    N2->data = 11;
    N2->next = N3;

    N3->prev = N2;
    N3->data = 15;
    N3->next = N4;

    N4->prev = N3;
    N4->data = 18;
    N4->next = NULL;

    doublyLinkedListTraversal(N1);
    return 0;
}
