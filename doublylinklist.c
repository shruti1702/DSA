#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};

void traversal(struct Node * head){
    struct Node *ptr =head;
    do
    {
        printf("ELement : %d\n",ptr->data);
        ptr= ptr->next;

    } while (ptr!=head);

}


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head =  (struct Node *)malloc(sizeof(struct Node));
    second =  (struct Node *)malloc(sizeof(struct Node));
    third =  (struct Node *)malloc(sizeof(struct Node));
    fourth =  (struct Node *)malloc(sizeof(struct Node));

    head->data =34;
    head ->next=second;

    second->data = 23;
    second ->next=third;

    third ->data=7;
    third->next=fourth;

    fourth->data=34;
    fourth->next=head;

    return 0;
}