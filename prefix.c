#include<stdio.h.>
#include<stdlib.h>
#include<string.h>

struct stack
{
    int top;
    int size;
    char *arr;
};

int stacktop(struct stack * ptr){
    return ptr->arr[ptr->top];
}

int empty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
    
}

int full(struct stack * ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack * ptr,int value){
    if (full(ptr))
    {
       printf("OVerflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
    
}

char pop (struct stack * ptr){
    if (empty(ptr))
    {
      printf("Underflow");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}
int precedence(char ch)
{
    if (ch == '*' || ch == '/'){
        return 3;
    }
    else if (ch == '+' || ch == '-'){
        return 2;
    }
    else{
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}
char *infixToPrefix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *prefix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            prefix[j] = infix[i];
            j--;
            i--;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(sp))){
                push(sp, infix[i]);
                i--;
            }
            else{
                prefix[j] = pop(sp);
                j--;
            }
        }
    }
    
    
    while (!empty(sp))
    {
        prefix[j] = pop(sp);
        j--;
    }
    prefix[j] = '\0';
    return prefix;
}

int main()
{
    char *infix = "s-y/z-k*d";
    printf("Prefix is %s \n",infixToPrefix(infix));
    // Topostfix(infix);

    return 0;
}