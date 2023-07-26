#include <bits/stdc++.h>
using namespace std;

int n,s,a[35],kq = 1000;

void quaylui(int i,int t,int x)
{
    if(t > s || x > kq) return;
    if(i==n)
    {
        if(t == s) kq = min(kq,x);
        return;
    }
    quaylui(i+1,t,x);
    quaylui(i+1,t+a[i],x+1);
}

main()
{
    cin >> n >> s;
    for(int i=0; i < n;i++) cin >> a[i];
    quaylui(0,0,0);
    if(kq == 1000) cout << "-1";
    else cout << kq;
}