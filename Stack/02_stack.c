// Satck using dynamic array 

#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    // Using the dynamic arrray
    int *arr;
    int top;
} stack;

// to intilize the stack
void init(stack *s, int si)
{
    s->size = si;
    s->arr = (int *)malloc(s->size * sizeof(int));
    // s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;
}

int isfull(stack *s)
{
    return s->top == s->size - 1;
}
int isempty(stack *s)
{
    return s->top == -1;
}

void push(stack *s, int value)
{
    if (s->top == s->size - 1)
    {
        printf("The stack is overflow");
        // Exit 0 will exit the whole program
        // exit(0);
    }
    s->top++;
    s->arr[s->top] = value;
}

// pop the element from the stack
int pop(stack *s)
{
    if (isempty(s))
    {
        printf("Stack underfllow cannot pop the element");
        return -1; // Indicator to the error
    }
    int value = s->arr[s->top];
    s->top--;
    return value;
}

// to display the element in the satck
void display(stack *s)
{
    if (isempty(s))
    {
        printf("the satck is empty");
        return;
    }
    // We use array here 
    printf("\nstack from bottom to top");
    for (int i = 0; i <= s->top; i++)
    {
        printf("\n%d", s->arr[i]);
        
    }
}

int main()
{
    stack s1;
    init(&s1, 10);
    push(&s1, 12);
    push(&s1, 13);
    push(&s1, 14);
    display(&s1);
    printf("Poped element %d",pop(&s1));
    display(&s1);

    return 0;
}