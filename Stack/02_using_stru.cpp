#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int size;
    int*arr;
    int top;
}stack;

// stack initiliation 

void initi(stack*s,int si)
{
    s->size=si;
    // allocate memory for the stack array 
    s->arr=(int*) malloc(s->size*sizeof(int));
    s->top=-1;
}

void push(stack*s,int value)
{
    if (s->top==s->size-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        s->top++;
        s->arr[s->top]=value;
    }
    
}

// to relese the memory 
void free_stack(stack*s)
{
    free(s->arr);
}
int main()
{
    stack s;
    // intilize the size of the object 

    initi(&s,4);
    push(&s,1);
    push(&s,89);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    // stack is overflow (condition )
    push(&s,6);

    // to free the memory 
    free_stack(&s);
    return 0;
}