#include <bits/stdc++.h>
using namespace std;
main()
{
    int a[1000005];memset(a,0,sizeof(a));
    a[1]=1;a[0]=1;
    for(int i=2;i <=1000;i++)
    {
        if(a[i] == 0) for(int j=i*i;j <=1000000;j+=i) a[j]=1;
    }
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int check=1;
        for(int i=2;i < n/2;i++)
        {
        
            if(a[n-i] == 0 && a[i] == 0) 
            {
                cout << i << " " << n-i << endl;
                check=0;
                break;
            }
        }
        if(check == 1) cout << "-1" <<endl;
    }
}