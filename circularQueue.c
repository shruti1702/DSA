#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int value)
{
    if (isFull(q))
    {
        printf("It is Full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("ELment Enqueued is %d \n", value);
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("It is Empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
    {
        q.size = 5;
        q.f = q.r = 0;
        q.arr = (int *)malloc(q.size * sizeof(int));
    };
    enqueue(&q, 17);
    enqueue(&q, 17);
    enqueue(&q, 9);
    enqueue(&q, 2001);
    //enqueue(&q, 27);

    printf("Elment dequeued is :  %d\n", dequeue(&q));
    printf("Elment dequeued is :  %d\n", dequeue(&q));
    printf("Elment dequeued is :  %d\n", dequeue(&q));
    printf("Elment dequeued is :  %d\n", dequeue(&q));
   // printf("Elment dequeued is :  %d\n", dequeue(&q));*/

    if (isFull(&q))
    {
       printf("Queue is full Now!!");
    }
    if (isEmpty(&q))
    {
        printf("Queue is empty Now!!");
    }
    
    

    return 0;
}