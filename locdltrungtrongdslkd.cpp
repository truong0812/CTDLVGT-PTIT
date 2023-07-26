#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;cin >> n;
    list <int> a;
    int x;
    for(int i=0;i <n;i++)
    {
        cin >> x;
        a.push_back(x);
    }
    while(!a.empty())
    {
        x=a.front();
        cout << x << " ";
        a.remove(x);

    }
}