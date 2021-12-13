#include <stdio.h>
#include <string.h>

int queue[10001];
int front = 0;
int rear = 0;
int size = 0;

int isFull()
{
    if (front == (rear + 1) % 10001)
        return (1);
    else
        return (0);
}

int isEmpty()
{
    if (front == rear)
        return (1);
    return (0);
}

void push(int n)
{
    if (!isFull())
    {
        queue[rear] = n;
        rear++;
        size++;
    }
}

int pop()
{
    if (!isEmpty())
    {
        int temp;
        temp = queue[front];
        queue[front] = 0;
        front++;
        size--;
        return (temp);
    }
    else
        return (-1);
}

int print_front()
{
    if (!isEmpty())
        return (queue[front]);
    else
        return (-1);
}

int print_back()
{
    if (!isEmpty())
        return (queue[rear - 1]);
    else
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
            printf("%d\n", size);
        else if (!strcmp(s, "empty"))
            printf("%d\n", isEmpty());
        else if (!strcmp(s, "front"))
            printf("%d\n", print_front());
        else if (!strcmp(s, "back"))
            printf("%d\n", print_back());
    }
}