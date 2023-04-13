#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

char stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int match(char a, char b){
    if(a=='{' && b == '}'){
        return 1;
    }
    if(a=='[' && b == ']'){
        return 1;
    }
    if(a=='(' && b == ')'){
        return 1;
    }
  return 0;
}


int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
     return 0;
}

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("The stack is Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is underflow");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

char checkpranthesis(char *exp)
{
    struct stack *sp ;
    sp->size = 15;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    printf("Stack is succesfully created \n");

    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '('|| exp[i]=='{' || exp[i]=='[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i]=='}' || exp[i]==']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            popped_ch = pop(sp);
            if(!match((popped_ch),exp[i])){
                return 0;
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "(6+7)-((9*(8))}";
    if (checkpranthesis(exp))
    {
        printf("It is matching");
    }
    else
    {
        printf("It is not matching");
    }

    return 0;
}