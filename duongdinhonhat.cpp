#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n+5][m+5],F[n+5][m+5];
        memset(F,0,sizeof(F));
        for(int i=1;i <=n;i++) for(int j=1;j <=m;j++) cin >> a[i][j];
        for(int i=1;i <=n;i++)
        {
            for(int j=1;j <=m;j++)
            {
                if(i==1 && j==1) F[i][j] = a[i][j];
                else if(i==1) F[i][j] = a[i][j] + F[i][j-1];
                else if(j==1) F[i][j] = a[i][j] + F[i-1][j];
                else
                {
                    F[i][j] = a[i][j] + min(F[i-1][j-1],min(F[i][j-1],F[i-1][j]));
                }
            }
        }
        cout << F[n][m] << endl;
    }
}