#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

typedef struct grade
{
//    string  name;
    char    name[11];
    int     kor;
    int     eng;
    int     math;
}gra;

gra arr[100001];

bool comp(const gra &a, const gra &b)
{
    if (a.kor != b.kor)
        return (a.kor > b.kor);
    else if (a.kor == b.kor && a.eng == b.eng && a.math == b.math)
    {
//        if ((a.name.compare(b.name)) < 0)
        if (strcmp(a.name, b.name) < 0)
            return (1);
        return (0);
    }
    else if (a.kor == b.kor && a.eng == b.eng)
        return (a.math > b.math);
    else if (a.kor == b.kor)
        return (a.eng < b.eng);
    return (0);
}

int main(void)
{
    int i, j;

    scanf("%d", &i);

    j = -1;
    while (++j < i)
        scanf("%s %d %d %d", &arr[j].name, &arr[j].kor, &arr[j].eng, &arr[j].math);
//    while (++j < i)    입출력이 많은 문제에서 cin과 cout은 시간초과를 유발한다
//        cin>>arr[j].name>>arr[j].kor>>arr[j].eng>>arr[j].math; 
    sort(arr, arr + i, comp);

    j = -1;
    while (++j < i)
        printf("%s\n", arr[j].name);
//    while (++j < i)
//        cout<<arr[j].name<<endl;
}