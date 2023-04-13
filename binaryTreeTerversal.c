#include <stdio.h>
#include <stdlib.h>
// STRUCTURE OF THE TREE OR NODE
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// TO CREATE THE TREE AND INPUT THE DATA IN IT...
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// PREPRDER TRAVERSAL
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left); // RECURSIVE METHOD
        preorder(root->right);
    }
}
// POSTORDER TREVERSAL
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right); // RECURSIVE METHOD
        printf("%d ", root->data);
    }
}
// INORDER TRAVERSAL
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data); // RECURSIVE METHOD
        inorder(root->right);
    }
}

// TO check it is binary SEARCH tree is or not...

int IsBst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!IsBst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return IsBst(root->right);
    }
    else
        return 1;
}

// Searching element in the binary search treee.

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key > root->data)
    {
        return search(root->right, key); // RECURSIVE METHOD
    }
    else
        return search(root->left, key);
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}


struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
    }

    //searching for the node to be deleted
    if (value < root->data){
        deleteNode(root->left,value);
    }
    else if (value > root->data){
        deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        deleteNode(root->left, iPre->data);
    }
}

int main()
{

    struct node *s = createnode(5); // CREATING THE TREE
    struct node *s1 = createnode(3);
    struct node *s2 = createnode(6);
    struct node *s3 = createnode(1);
    struct node *s4 = createnode(4);
    struct node *s6 = createnode(7);

    s->left = s1;
    s->right = s2;
    s1->left = s3;
    s1->right = s4;
    s2->right = s6;

    // preorder(s);
    // printf("\n");
    // postorder(s);
    // printf("\n");
    inorder(s);
    printf("\n");

  /*  // PRINTING THE IT IS OR NOT BST TREE

    if (IsBst(s))
    {
        printf("It is a binary search tree\n");
    }
    else
        printf("It is not a binary search tree\n");

    // PRINTING ELEMENT IS FOUND OR NOT

    struct node *n = search(s, 5);
    if (n != NULL)
    {
        printf("Elemment Found %d \n", n->data);
    }
    else
    {
        printf("ELement is not found");
    }*/

    return 0;
}