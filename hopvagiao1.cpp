#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while (t--)
    {
        int n,m;cin >> n >> m;
        int a[n+5],b[m+5];
        set <int> hop;
        int giao[n+5];
        for(int i=0;i <n;i++)
        {
            cin >> a[i];
            hop.insert(a[i]);
        }
        for(int i=0;i <m;i++)
        {
            cin >> b[i];
            hop.insert(b[i]);
        }
        for(auto i:hop) cout << i << " ";       
        cout << endl;
        sort(a,a+n);
        sort(b,b+m);
        int x=0,y=0,z=0;
        while(x < n && y < m)
        {
            if(a[x] == b[y] )
            {
                giao[z]=a[x];
                x++;y++;z++;
            }
            else if(a[x] < b[y]) x++;
            else y++;
        }
        for(int i=0;i <z;i++) cout << giao[i] <<" ";
        cout << endl;
    }
}