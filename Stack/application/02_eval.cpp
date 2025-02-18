#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#define max 100
// convert infix to postfix

// variable definition for stack
char stack[max];
char infix[max], postfix[max];

// to define the push and pop
int top = -1;

// to push the element in stack
char push(char val)
{
    if (top == max - 1)
    {
        cout << "stack is overflow :" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}
char pop()
{
    if (top == -1)
    {
        cout << "Stack is underflow :";
    }
    else
        return stack[top--];
}
bool isEmpty()
{
    return top == -1;
}

// to chek white space and tab
int white_space(char white)
{
    if (white == ' ' || white == '\t')
        return 1;
    else
        return 0;
}

// precendence define karna parega
int precedence(char symbol)
{
    // switch case to define the precendence of the operator

    switch (symbol)
    {
    case '^':
        return 3;

    // same precendence
    case '*':
    case '%':
    case '/':
        return 2;
    // same precedence
    case '+':
    case '-':
        return 1;

    default:
        return 0;
    }
}

void in_to_post()
{
    char symbol, next;
    int j = 0;
    // to scan the symbol
    for (int i = 0; i < strlen(infix); i++)
    {

        symbol = infix[i];

        // handling the white space
        if (white_space(symbol))
            continue;

        // using the switch case to check the condition (ignoring the white space )
        switch (symbol)
        {
        case '(':
            // pushing the symbol into the stack
            push(symbol);
            break;
        // left parenthis has the least precendence
        case ')':
            while ((next = pop()) != '(')
            {
                postfix[j++] = next;
            }
            break;
        case '+':
        case '-':
        case '*':
        case '%':
        case '/':
        case '^':
            while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
            {
                postfix[j++] = pop();
            }
            push(symbol);
            break;
        default:
            postfix[j++] = symbol;
            break;
        }
    }
    // iterator is finished then
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    // adding the null string in the last (neccessery )
    postfix[j] = '\0';
}

int pow(int a,int b)
{
    return a*b;
}

int post_eval()
{
    // scan the postfix number
    for (int i = 0; i < strlen(postfix); i++)
    {
        if (postfix[i] >= '0' && postfix[i] <= '9')
        {
            // it uses the asscii value
            push(postfix[i] - '0');
        }
        else
        {
            int a = pop();
            int b = pop();
            switch (postfix[i])
            {
            case '+':
                push(b + a);
                break;
            case '-':
                push(b - a);
                break;
            case '*':
                push(b * a);
                break;
            case '%':
                push(b % a);
                break;
            case '/':
                push(a / b);
                break;
            case '^':
                push(pow(a, b));
                break;
            }
        }
    }
    // returning the last element to the function
    return pop();
}
int main()
{
    cout << "Enter the infix operation :" << endl;
    gets(infix);
    in_to_post();

    // to print the postfix operator  /
    cout <<"Postfix expression is :";
    for (int i = 0; i < strlen(postfix); i++)
    {
        cout<< postfix[i];
    }
    int result=post_eval();
    cout << "\nEvalution of postfix is :"<<result;
}