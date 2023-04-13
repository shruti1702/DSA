#include<stdio.h>
#include<stdlib.h>

struct stack
{
   int size;
   int top;
   int *arr;
};

int isEmpty(struct stack * ptr){
    if ( ptr->top == -1){
        return 1;
    }
    return 0;
}

int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
       return 1;
    }
    return 0;
}

void push(struct stack *ptr, int value ){
    if (isfull(ptr)){
        printf("stack overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] =value;
    }
}


int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Underflow!");
    }
    else{
        int value  =  ptr->arr[ptr->top];
        ptr-> top--;
        return value;
    }

}

int peek(struct stack * sp ,int i){
    int index = sp -> top- i +1;
    if(index < 0){
        printf("invalid");
        return -1;

    }
    else{
        return sp->arr[index];
    }
}

int stacktop(struct stack * sp){
    return sp->arr[sp->top];
}

int bottom(struct stack * sp){
    return sp->arr[0];

}

int main(){
    struct stack * sp= (struct stack *)malloc(sizeof(struct stack));
    sp->size = 15;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("Stack is succesfully created \n");

    push(sp,8);
    push(sp,1);
    push(sp,21);
    push(sp,4);
    push(sp,34);
    push(sp,56);
    push(sp,24);
    push(sp,19);
    push(sp,27);
    push(sp,14);
    push(sp,33);
 
    //pop(sp);

    //printf("Element popped: %d \n",pop(sp));

    for (int j = 1; j < sp -> top+2; j++)
    {
       printf("The value at point %d is %d\n",j,peek(sp,j));
    }

    printf("The top most element in the stack is %d\n",stacktop(sp));
    printf("The bottom element in the stack is %d \n",bottom(sp));

    return 0;
}