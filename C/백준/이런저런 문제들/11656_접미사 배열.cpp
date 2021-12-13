#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;


int main(void)
{
    int i, j;
    string str;
    string temp[1000];

    cin>>str;
    i = str.length();
    j = -1;
    while (++j < i)
    {
        temp[j] = str.substr(j);
    }
    sort(temp, temp + i);
    j = -1;
    while (++j < i)
        cout<<temp[j]<<endl;
}