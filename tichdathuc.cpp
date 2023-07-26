#include <bits/stdc++.h>
using namespace std;

int n,m,a[105],b[105],c[205];

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=0;i <n;i++) cin >> a[i];
        for(int i=0;i <m;i++) cin >> b[i];
        memset(c,0,sizeof(c));
        for(int i=0;i <n;i++)
        {
            for(int j=0;j <m;j++)
            {
                c[i+j] +=(a[i]*b[j]);
            }
        }
        for(int i=0;i <n+m-1;i++) cout << c[i] << " ";
        cout << endl;
    }
}