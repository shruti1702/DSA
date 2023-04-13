#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q){
    if (q->r == q->f )
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q , int value){
    if (isFull(q))
    {
        printf("Its full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
        printf("Enqueued element : %d\n",value);
    }
    
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Its empty \n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;

}

int main(){
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    enqueue(&q,17);
    enqueue(&q,9);
    enqueue(&q,2001);
    enqueue(&q,27);

   printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is  full \n");
    }


    return 0;
}