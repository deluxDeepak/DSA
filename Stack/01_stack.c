// Stack using static array

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct stack
{
    int top;
    int arr[MAX_SIZE];
} stack;

// Make the initilze funtion to initilize the satck to 
void init(stack*s)
{
    s->top=-1;
}

int isFull(stack *s)
{
    return s->top ==MAX_SIZE - 1;
}
int isEmpty(stack *s)
{
    return s->top == -1;
}
void push(stack *s, int value)
{
    if (isFull(s))
    {
        printf("The stack is overflow");
        printf("Stack Overflow! Cannot push %d\n", value);
        // BUG FIX: Must return to prevent writing out of bounds
        return;
    }
    s->top++;
    s->arr[s->top] = value;
}

void display(stack *s)
{
    if (isEmpty(s))
    {
        printf("The satck is empty\n");
        return;
    }
    printf("stack element bottom to top ");
    // i <= MAX_SIZE karenge to garbage value aa jata hai 
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ", s->arr[i]);
    }
}

int main()
{
    stack s;
    init(&s);
    push(&s,45);
    push(&s,40);
    push(&s,41);
    display(&s);

    return 0;
}