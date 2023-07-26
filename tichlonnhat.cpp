#include <bits/stdc++.h>
using namespace std;

main()
{
   
        int n;cin >> n;
        int a[n+5];
        for(int i=0;i <n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long x=a[0]*a[1],y=x*a[n-1],z=a[n-1]*a[n-2],u=z*a[n-3];
        cout << max(x,max(y,max(z,u))) << endl;
    
}