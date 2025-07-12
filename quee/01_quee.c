#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct quee
{
    int rear, front;
    int arr[MAX_SIZE];
} quee;

// initilize the quee
void init(quee *q)
{
    q->rear = -1;
    q->front = -1;
}
int isFull(quee *q)
{
    return q->rear == MAX_SIZE - 1;
}
int isEmpty(quee *q)
{
    return q->front == -1;
}
void push(quee *q, int value)
{
    if (isFull(q))
    {
        printf("The quee is full overflow");
        return;
    }
    else if (isEmpty(q))
    {
        q->front = q->rear = 0;
        q->arr[0]=value;
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = value;
    }
}

void pop(quee *q)
{
    if (isEmpty(q))
    {
        printf("The queu is empty, underflow\n");
        return;
    }
    // case when the front and rear at the
    else if (q->rear ==q->front)
    {
        q->rear = q->front = -1;
        init(q);
    }
    q->front = q->front + 1;
}
void display(quee *q)
{
    if (isEmpty(q))
    {
        printf("The queue is Empty\n");
        return;
    }
    printf("The element of the queu\n");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
}

int main()
{
    quee q1;
    init(&q1);
    push(&q1, 89);
    push(&q1, 99);
    push(&q1, 90);
    display(&q1);
    pop(&q1);
    display(&q1);


    return 0;
}