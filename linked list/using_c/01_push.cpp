#include <iostream>
using namespace std;
typedef struct linked
{
    int data;
    // yahan pe struct use karna parega
    struct linked *next;
} linked;
void intilize(linked *s, int value)
{
    linked *head = (linked *)malloc(sizeof(linked));
    head->data = value;
    head->next = NULL;
    cout << head->data;
}
int main()
{
    linked s;
    intilize(&s, 78);
}
