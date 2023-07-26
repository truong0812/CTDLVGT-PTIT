#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,vt=-1;cin >> n;
        long long x,a;cin >> x;
        for(int i=1;i <=n;i++)
        {
            cin >> a;
            if(a <= x) vt=i;
        }
        cout << vt << endl;
    }
}