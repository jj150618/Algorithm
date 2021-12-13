#include <stdio.h>
#include <stdlib.h>

typedef struct t_list
{
    char data;
    struct t_list *prev;
    struct t_list *next;
}s_list;

int main(void)
{
    s_list *head;
    s_list *cur;
    char c;
    int i, j;
    
    head = (s_list *)malloc(sizeof(s_list));
    head->data = '0';
    head->prev = NULL;
    head->next = NULL;
    cur =  head;
    while ((c = getchar()) != '\n')
    {
        s_list *temp;
        temp = (s_list *)malloc(sizeof(s_list));
        temp->data = c;
        temp->prev = cur;
        temp->next = NULL;
        cur->next = temp;
        cur = temp;
    }
    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf(" %c", &c);
        switch (c)
        {
            case 'L' :
            {
                if (cur->prev)
                    cur = cur->prev;
                break;
            }
            case 'D' :
            {
                if (cur->next)
                    cur = cur->next;
                break;
            }
            case 'B' :
            {
                if (!cur->prev)
                    continue;
                s_list *del;
                del = (s_list *)malloc(sizeof(s_list));
                del = cur;
                cur = del->prev;
                if (del->next)
                {
                    cur->next = del->next;
                    del->next->prev = cur;
                    del->prev = NULL;
                }
                else
                    cur->next = NULL;
                free(del);
                break;
            }
            case 'P' :
            {
                char c1;
                scanf(" %c", &c1);
                s_list *new;
                new = (s_list *)malloc(sizeof(s_list));
                new->data = c1;
                new->prev = cur;
                if (cur->next)
                {
                    new->next = cur->next;
                    cur->next->prev = new;
                }
                else
                    new->next = NULL;
                cur->next = new;
                cur = cur->next;
                break;
            }
        }
    }
    head = head->next;
    while (head)
    {
        printf("%c",head->data);
        head = head->next;
    }
}

/* 이건 시간 복잡도가 O(M * N)이여서 시간 초과가 뜬다!!
리스트나 스택을 구현해보자.!!
#include <stdio.h>
#include <string.h>

int cursor;
char str[600001];

void move_left()
{
    if (cursor)
        cursor--;
}

void move_right()
{
    if (cursor != strlen(str))
        cursor++;
}

void delete()
{
    if (cursor)
    {
        str[cursor - 1] = '\0';
        strcat(str, str + cursor + 1);
        cursor--;
    }
}

void input(char ch)
{
    char temp[600002] = "";
    strcat(temp, str + cursor);
    str[cursor] = ch;
    str[cursor + 1] = '\0';
    strcat(str, temp);
}

int main(void)
{
    int i, j;

    char c[2];

    scanf("%s", str);
    cursor = strlen(str);
    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf("%s", c);
        if (c[0] == 'L')
            move_left();
        else if (c[0] == 'D')
            move_right();
        else if (c[0] == 'B')
            delete();
        else if (c[0] == 'P')
        {
            scanf("%s", c);
            input(c[0]);
        }
    }
    printf("%s\n", str);
}
*/