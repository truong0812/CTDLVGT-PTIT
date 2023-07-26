#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        long long x,y;
        priority_queue < long long, vector <long long>, greater <long long> > kq;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            kq.push(x);
        }
        long long cp=0;
        while(kq.size() > 1)
        {
            x=kq.top();kq.pop();
            y=kq.top();kq.pop();
            cp+=(x+y);
            cp %= mod;
            kq.push((x+y)%mod);
        }
        cout << cp << endl;
    }
}