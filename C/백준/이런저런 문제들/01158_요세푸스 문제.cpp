#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); // C언어와 C++의 동기화를 끊어 C++버퍼만 사용하여 cin이나 cout의 속도를 향상시킴
    cin.tie(0);
    int n, k;
    int i;
    int cur;
    int max;
    cin >> n >> k;

    vector<int> v;
    i = 0;
    while (++i <= n)
        v.push_back(i);
    cout<<"<";
    i = -1;
    cur = -1;
    max = n;
    while (++i < n)
    {
        cur = (cur + k) % max;
        cout<<v[cur];
        v.erase(v.begin() + cur);
        cur--;
        max--;
        if (i == n - 1)
            cout<<">\n";
        else
            cout<<", ";
    }
}