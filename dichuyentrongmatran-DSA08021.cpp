#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int bc[1005][1005];
int m,n;

void Try()
{
    bc[1][1]=0;
    for(int i=1;i <=m;i++)
    {
        for(int j=1;j <=n;j++)
        {
            if(bc[i][j] != -1)
            {
                if(bc[i][j+a[i][j]] == -1) bc[i][j+a[i][j]] = bc[i][j] + 1;
                else bc[i][j+a[i][j]] = min(bc[i][j]+1,bc[i][j+a[i][j]]);
                if(bc[i+a[i][j]][j] == -1) bc[i+a[i][j]][j] = bc[i][j] + 1;
                else bc[i+a[i][j]][j] = min(bc[i][j]+1,bc[i+a[i][j]][j]);
            }
        }
    }
    cout << bc[m][n] << endl;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(bc,-1,sizeof(bc));
        cin >> m >> n;
        for(int i=1;i <= m;i++) for(int j=1;j <=n;j++) cin >> a[i][j];
        Try();
    }
}