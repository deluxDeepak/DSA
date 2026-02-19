#include <stdio.h>
#define size 100
typedef struct queue
{
    int arr[size];
    int capacity;
} queue;

// insertion in decending order (so deletion Sould be done from the last)
void insert(queue *q, int value)
{
    if (q->capacity == size)
    {
        printf("Queue is overflow !");
        return;
    }
    int i;
    for (i = q->capacity - 1; i >= 0 && q->arr[i] < value; i--)
    {
        // shift the poisition
        q->arr[i + 1] = q->arr[i];
    }
    q->arr[i + 1] = value;
    q->capacity++;
}

// delete the element (from the back of the queu )
void delte(queue *q)
{
    if (q->capacity==0)
    {
       printf("Queue is underflow:");
       return;
    }
    // just reduce the capacity to delte 
    q->capacity--;
    printf("The delted element:%d",q->arr[q->capacity]);
    
}

// print the queue
void print_queue(queue *q)
{
    printf("Element are: ");
    for (int i = 0; i < q->capacity; i++)
    {
        printf(" %d ", q->arr[i]);
    }
    printf("\n");
}
int main()
{
    queue q;
    q.capacity = 0;
    insert(&q, 56);
    insert(&q, 23);
    insert(&q, 99);
    delte(&q);

    print_queue(&q);
}