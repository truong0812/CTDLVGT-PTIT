#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n],b[n];
        for(int i=0;i <n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        bool ok=true;
        for(int i=0;i <n;i++)
        {
            if(a[i] != b[i] && a[i] != b[n-1-i])
            {
                ok=false;
                break;
            }
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
}