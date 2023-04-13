#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;

};

struct node *createNode(int data){
    struct node *n = (struct node *)malloc(sizeof(struct node)) ;
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
struct node * searchIter(struct node * root, int key){
    while (root!=NULL)
    {
        if(key==root->data){
            return root;
        }
        else if (key > root->data)
        {
            root = root->right;
        }else{
            root = root->left;
        }
        
    }
    return NULL;
    
}


int main(){

    
struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;



    struct node* n = searchIter(p, 6);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}