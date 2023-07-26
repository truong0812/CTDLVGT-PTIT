#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a > b;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;cin >> n >> k;
        int a[n];
        multiset <int,greater<int>> s;
        for(auto &i:a) cin >> i;
        for(int i=0;i <k-1;i++) s.insert(a[i]);
        for(int i=k-1;i <n;i++)
        {
            s.insert(a[i]);
            cout << *s.begin() << " ";
            s.erase(s.find(a[i-k+1]));
        }
        cout << endl;
    }
}