#include <bits/stdc++.h>
using namespace std;

bool h[20],nguoc[25],xuoi[25];
int n,dem;

void Try(int x)
{
    for(int i=1;i <=n;i++)
    {
        if(h[i] && nguoc[x+i-1] && xuoi[x-i+n])
        {
            h[i]=nguoc[x+i-1]=xuoi[x-i+n]=false;
            if(x==n)
            {
                dem++;
            }
            else Try(x+1);
            h[i]=nguoc[x+i-1]=xuoi[x-i+n]=true;
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;dem=0;
        memset(h,true,sizeof(h));
        memset(nguoc,true,sizeof(nguoc));
        memset(xuoi,true,sizeof(xuoi));
        Try(1);
        cout << dem << endl;
    }
}
