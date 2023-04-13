#include <stdio.h>
#include <stdlib.h>

/*struct stack
{
   int size;
   int top;
   int *arr;
};

int ISempty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int ISfull(struct stack * ptr){
    if(ptr-> top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack * ptr, int data){
    if (ISfull(ptr))
    {
       printf("The stack is overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;

    }
    return data;
}

int pop (struct stack *ptr ){
    if (ISempty(ptr))
    {
        printf("The stack is underflow\n");
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
   }
}



int main(){
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    printf("The stack has been created succesfully \n");

    int s = push(sp,17);
    int t = push(sp,9);
    int u = push (sp,20);
    int v = push (sp, 1);
    printf("Pushed elment : %d\n",u);
    printf("Pushed element : %d\n",v);
    printf("Pushed elment : %d\n",s);
    printf("Pushed element : %d\n",t);

    int a =  pop (sp);
    int b = pop (sp);
    printf("popped element is  : %d\n",a);
    printf("popped element is  : %d\n",b);
    printf("Popped element is : %d",pop(sp));
    printf("%d\n ",pop(sp));
    pop(sp);
    pop(sp);
    pop(sp);






    return 0;
}
*/

/*struct stack{
    int size;
    int * arr;
    int top;
};

int ISempty(struct stack *ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    return 0;
}

int Isfull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr,int value){
    if (Isfull(ptr))
    {
      printf("The stack  is overflow\n");
    }
    else{
        ptr->arr[ptr->top]=value;
        ptr->top++;
    }
    printf("Inserted successfully %d \n",value);
}

int pop (struct stack *ptr){
    if (Isfull(ptr))
    {
        printf("The stack is underflow \n");

    }
    else{
        ptr->top--;
        int data = ptr->arr[ptr->top];

        return data;
    }

}


int peek(struct stack * sp ,int i){
    int index =sp->top-i+1;
    if(index<0){
        printf("Invalid");
        return -1;
    }
    else{
       return sp->arr[index];
    }
}
int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}
int topmost(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int main(){
    struct stack * sp= (struct stack *)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr;
    printf("Stack is cretaed succesfully \n");


    push(sp,17);
    push(sp,9);
    push(sp,3);
    push(sp,23);
    push(sp,33);
    int a= pop(sp);
    printf(" Popped out %d \n",a);
    for ( int j = 1; j < sp->top+2; j++)
    {
       printf("%d \n",peek(sp,j));
    }
    for (int j = 1; j < sp -> top+2; j++)
    {
       printf("The value at point %d is %d\n",j,peek(sp,j));
    }


    printf("The last element is %d\n",stackBottom(sp));
    printf("The topmost element is %d\n",topmost(sp));


    return 0;



}*/

//--------------Stack using link list----------

/*struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void treversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("The element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int ISEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (IsFull(top))
    {
        printf("The stack is overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node *tp)
{
    if (ISEmpty(tp))
    {
        printf("The stack is underflow\n");
    }
    else
    {
        struct Node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 17);
    top = push(top, 78);
    treversal(top);
    pop(top);
    treversal(top);
}


//-----------------------------------------------------------------------

struct {
    int data;
    struct  Node * next;
};

struct Node * top =NULL;

void linklisttreaversal( struct Node * ptr){
    while (ptr!= NULL)
    {
        printf("The element i s : %d \n",ptr->data);
        ptr =ptr->next;
    }

}

int IsEmpty(struct Node * top){
    if (ptr== NULL)
    {
        return 1;
    }
    return 0;
}

int IsFUll (struct Node * top){
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node * push(struct Node * top, int x){
    if (Isfull(top))
    {
        printf("Overflow!!");
    }
    else{
        struct Node * n =(struct Node *)malloc(struct Node);
        n->data =x;
        n->next=top;
        top=n;
        return top;

    }
}
int pop(struct Node * tp){
    if (ISEmpty(tp))
    {
       printf("Underflow");

    }else{
        struct Node * n = tp;
        top=tp->next;
        int a =n->data;
        free(n);
        return x;

    }

}*/

/*-----------------------queue using array -----------------*/

/*struct queue
{
    int size;
    int r;
    int f;
    int *arr;
};

int Isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
/*int Isempty(struct queue *q){
    if (q->r == q->f )
    {
        return 1;
    }
    return 0;
}

int Isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enuqeue(struct queue *q, int value)
{
    if (Isfull(q))
    {
        printf("Queue is overflow\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("The enqued value is %d \n", value);
    }
}

int deqeue(struct queue *q)
{
    int a = -1;

    if (Isempty(q))
    {
        printf("Queue is underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{

    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enuqeue(&q, 17);
    enuqeue(&q, 9);

    enuqeue(&q, 8);
    enuqeue(&q, 6);

    enuqeue(&q, 4);

    printf("Deququed Elment is %d \n ", deqeue(&q));
    deqeue(&q);
    deqeue(&q);
    deqeue(&q);
    deqeue(&q);

    if (Isempty(&q))
    {
        printf("The queue is empty\n");
    }
    if (Isfull(&q))
    {
        printf("The queue is full");
    }

    return 0;
}*/

/*------circular queue----------*/

/*struct circularqueue
{
    int size;
    int r;
    int f;
    int *arr;
};

int isempty(struct circularqueue * q){
    if (q->f==q->r)
    {
        return 1;
    }
    return 0;
}
int isfull(struct circularqueue * q){
    if ((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue * q,int value){
    if (isfull(q))
    {
        printf("The queue is full\n");

    }
    else{
        q->r++;
        q->arr[q->r] = value;
        printf("the enqueued element is : %d\n",value);
    }

}

int denqueue(struct circularqueue * q){
    int a=-1;
    if (isempty(q))
    {
        printf("The queue is empty\n");

    }
    else{
        a= q->arr[(q->f + 1) % q->size];
    }
    return a;

}

int main(){
    struct circularqueue q;
    q.size=10;
    q.f = q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enqueue(&q,17);
    enqueue(&q,9);
    denqueue(&q);
    denqueue(&q);
    denqueue(&q);

    if (isfull(&q))
    {
       printf("Queue is full Now!!");
    }
    if (isempty(&q))
    {
        printf("Queue is empty Now!!");
    }
return 0;


}*/

/*struct Node{
    int data;
    struct Node*next;
};

void t(struct Node *head){
    struct  Node * ptr = head;
    do{
        printf("ELment %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}



struct Node * insertatBegiinning(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node * p = head->next;

    while (p->next!=head)
    {
        p =p->next;
    }
    p->next =ptr;
    ptr->next = head;
    head=ptr;
    return head;


}


struct Node * insertionBT(struct Node *head, int data ,int index)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data=data;
    int i =0;
    while ( i !=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    return head;
}

int main (){
    struct Node *head;
    struct Node* second;
    struct Node* third;


    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data=23;
    head->next=second;

    second ->data=9;
    second ->next=third;

    third ->data=7;
    third->next=head;
    t(head);


   // insertionBT(head,45,2);
    //traversal(head);

    head = insertatBegiinning(head,17);
    t(head);

   return 0;

}*/

/*struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d \n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }
}

int Bst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!Bst(root->left))
        {
            return 0;
        }

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;

            prev = root;
            return Bst(root->right);
        }

        else

            return 1;
    }
}

struct node *Serach(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data < key)
    {
        return Serach(root->right, key);
    }
    else
    {
        return Serach(root->left, key);
    }
}
struct node * iteravie(struct node * root,int key){
    while (root!=NULL)
    {
        if(root->data==key){
            return root;
        }
        if(key<root->data){
            root = root->left;
        }
        else{
            root= root->right;
        }

    }
    return NULL;
}
int main()
{
    struct node *s = createnode(17);
    struct node *s1 = createnode(34);
    struct node *s2 = createnode(9);
    struct node *s3 = createnode(6);
    struct node *s4 = createnode(2);

    s->left = s1;
    s->right = s2;
    s1->left = s3;
    s3->right = s4;

    inorder(s);

    if (Bst(s))
    {
        printf("It is a binary search tree \n");
    }
    else
    {
        printf("It is not a binary search tree \n");
    }

    struct node *n = iteravie(s, 5);
    if (n != NULL)
    {
        printf("ELemnt is found \n", n->data);
    }
    else
    {
        printf("Not found");
    }

    return 0;
}*/