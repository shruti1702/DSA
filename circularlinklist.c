#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void traversal(struct Node * head){
    struct Node *ptr =head;
    do
    {
        printf("ELement : %d\n",ptr->data);
        ptr= ptr->next;

    } while (ptr!=head);
    
}

int inseratbeginiing(struct Node *head,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node * p = head->next;
    while (p->next != head)
    {
        p=p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
    
}


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head ->data=3;
    head ->next=second;

    second ->data=9;
    second ->next=third;

    third ->data=7;
    third->next=fourth;

    fourth->data=34;
    fourth->next=fifth;

    fifth ->data=17;
    fifth ->next = head;

    traversal(head);
    head = inseratbeginiing(head,90);
    traversal(head);

    
    return 0;
}