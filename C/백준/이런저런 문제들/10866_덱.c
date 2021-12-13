#include <stdio.h>
#include <string.h>

int deque[10001];
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

void push_front(int n)
{
    if (!isFull())
    {
        deque[front] = n;
        front--;
        if (front < 0)
            front = 10000;
        size++;
    }
}

void push_back(int n)
{
    if (!isFull())
    {
        rear++;
        if (rear > 10000)
            rear = 0;
        deque[rear] = n;
        size++;
    }
}

int pop_front()
{
    if (!isEmpty())
    {
        int temp;
        temp = deque[(front + 1) % 10001];
        deque[(front + 1) % 10001] = 0;
        front = (front + 1) % 10001;
        size--;
        return (temp);
    }
    else
        return (-1);
}

int pop_back()
{
    if (!isEmpty())
    {
        int temp;
        temp = deque[rear];
        deque[rear] = 0;
        rear = (rear - 1 + 10001) % 10001;
        size--;
        return (temp);
    }
    else
        return (-1);
}

int print_front()
{
    if (!isEmpty())
        return (deque[(front + 1) % 10001]);
    else
        return (-1);
}

int print_back()
{
    if (!isEmpty())
        return (deque[rear]);
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
        char s[15];
        scanf("%s", s);
        if (!strcmp(s, "push_front"))
        {
            scanf("%d", &n);
            push_front(n);
        }
        else if (!strcmp(s, "push_back"))
        {
            scanf("%d", &n);
            push_back(n);
        }
        else if (!strcmp(s, "pop_front"))
            printf("%d\n", pop_front());
        else if (!strcmp(s, "pop_back"))
            printf("%d\n", pop_back());
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