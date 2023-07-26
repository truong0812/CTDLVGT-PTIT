#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        long long a[n+5];
        for(int i=1;i <=n;i++) cin >> a[i];
        a[2] = max(a[1],a[2]);
        for(int i=3;i <=n;i++) 
        {
            a[i] = max(a[i-1],a[i-2] + a[i]);
        }
        cout << a[n] << endl;
    }
}