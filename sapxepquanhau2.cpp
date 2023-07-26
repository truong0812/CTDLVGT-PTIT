#include <bits/stdc++.h>
using namespace std;

bool c[10],ngc[20],xuoi[20];
int a[10][10],res;
int x[10];

void Try(int i)
{
    for(int j=1;j <=8;j++)
    {
        if( c[j] && ngc[i+j-1] && xuoi[i-j+8])
        {
            x[i]=j;
            c[j] = ngc[i+j-1] = xuoi[i-j+8] = false;
            if(i==8)
            {
                int ans=0;
                for(int l=1;l <=8;l++)
                {
                    ans+=a[l][x[l]];
                }
                res=max(res,ans);
            }
            else Try(i+1);
            c[j] = ngc[i+j-1] = xuoi[i-j+8] = true;
        }
    }
}

main()
{
    int t;cin >> t;
    for(int k=1;k <=t;k++)
    {
        for(int i=1;i <=8;i++) for(int j=1;j <=8;j++) cin >> a[i][j];
        memset(c,true,10);
        memset(ngc,true,20);
        memset(xuoi,true,20);
        res=0;
        Try(1);
        cout << res << endl;
    }
}