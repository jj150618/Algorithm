#include <stdio.h>
#include <string.h>

int stack[10000];
int top = -1;

int isFull()
{
    if (top >= 9999)
        return (1);
    return (0);
}

int isEmpty()
{
    if (top == -1)
        return (1);
    return (0);
}

void push(int n)
{
    if (!isFull())
    {
        top++;
        stack[top] = n;
    }
}

int pop()
{
    if (!isEmpty())
    {
        int temp;
        temp = stack[top];
        stack[top] = 0;
        top--;
        return (temp);
    }
    if (isEmpty())
        return (-1);
}

int peek()
{
    if (!isEmpty())
        return (stack[top]);
    if (isEmpty())
        return (-1);
}

int main(void)
{
    int i, j;

    int n;

    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        char s[10];
        scanf("%s", s);
        if (!strcmp(s, "push"))
        {
            scanf("%d", &n);
            push(n);
        }
        else if (!strcmp(s, "pop"))
            printf("%d\n", pop());
        else if (!strcmp(s, "size"))
            printf("%d\n", top + 1);
        else if (!strcmp(s, "empty"))
            printf("%d\n", isEmpty());
        else if (!strcmp(s, "top"))
            printf("%d\n", peek());
    }
}