#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 100
typedef struct quee
{
    int arr[size];
    int front;
    int rear;
} quee;

bool isfull(quee *q)
{
    return q->rear == size - 1;
}
bool isempty(quee *q)
{
    return q->front == -1;
}
void push(quee *q, int value)
{
    if (isfull(q))
    {
        printf("Queue is overfull");
    }
    if (isempty(q))
    {
        q->rear = q->front = 0;
        q->arr[q->rear] = value;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = value;
    }
}
int pop(quee *q)
{
    if (isempty(q))
    {
        printf("Queue is underflow");
        return -1;
    }

    int val = q->arr[q->rear];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
        q->front++;

    return val;
}
void print_queu(quee *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
}
int main()
{
    quee q;
    q.front = -1;
    q.rear = -1;
    int value, choice;
    printf("\n*************Implimentation of the quee *************\n");

    while (1)
    {
        printf("Enter the choice:\n");
        printf("1.Push\n2.Pop\n3.Empty\n4.Full\n5.Show the Element\n6.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            push(&q, value);
            break;
        case 2:
            printf("The poped element %d\n", pop(&q));
            break;
        case 3:
            if (isempty(&q))
            {
                printf("Queue is empty\n");
            }
            else
                printf("Queue has element: \n");

            break;
        case 4:
            if (isfull(&q))
            {
                printf("Queue is Full\n");
            }
            else
                printf("Queue is not full:\n ");

            break;
        case 5:
            printf("The elemnt of the quue:");
            print_queu(&q);
            printf("\n");
            break;
        case 6:
            exit(1);
            break;

        default:
            printf("Invalid choice,Try valid one.\n");
        }
    }

    printf("The element of the quee: ");
    print_queu(&q);
}