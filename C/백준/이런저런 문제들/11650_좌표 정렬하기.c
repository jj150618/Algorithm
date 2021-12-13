#include <stdio.h>
#include <stdlib.h>

typedef struct locate
{
    int x;
    int y;
}loc;

loc array[100001];

void swap(int a, int b)
{
    loc temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition_x(int left, int right)
{
    loc pivot = array[left];
    int low = left + 1;
    int high = right;

    while (low <= high)
    {
        while (array[low].x <= pivot.x && low <= right)
            low++;
        while (array[high].x >= pivot.x && high >= left + 1)
            high--;
        if (low <= high)
            swap(low, high);
    }
    swap(left, high);

    return high;
}

void q_sort_x(int left, int right)
{
    if (left <= right)
    {
        int pivot = partition_x(left, right);
        q_sort_x(left, pivot - 1);
        q_sort_x(pivot + 1, right);
    }
}

int partition_y(int left, int right)
{
    loc pivot = array[left];
    int low = left + 1;
    int high = right;

    while (low <= high)
    {
        while (array[low].y <= pivot.y && low <= right)
            low++;
        while (array[high].y >= pivot.y && high >= left + 1)
            high--;
        if (low <= high)
            swap(low, high);
    }
    swap(left, high);

    return high;
}

void q_sort_y(int left, int right)
{
    if (left <= right)
    {
        int pivot = partition_y(left, right);
        q_sort_y(left, pivot - 1);
        q_sort_y(pivot + 1, right);
    }
}

int main(void)
{
    int i, j;
    int cnt;
    int start, end;
        

    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d %d", &array[j].x, &array[j].y);

    q_sort_x(0, i - 1);

    cnt = 0;
    j = 0;
    while (++j < i)
    {
        if (array[j].x == array[j - 1].x)
        {
            cnt = 1;
            start = j - 1;
            while (array[j].x == array[j - 1].x)
                end = j++;
        }
        if (cnt == 1)
            q_sort_y(start, end);
        cnt = 0;
    }

    j = -1;
    while (++j < i)
        printf("%d %d\n", array[j].x, array[j].y);
}