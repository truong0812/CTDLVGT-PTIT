#include <bits/stdc++.h>
using namespace std;

int d[105][105];
int n,m,q;

void floyd()
{
    for(int k=1;k <=n;k++)
    {
        for(int i=1;i <= n;i++)
        {
            for(int j=1;j <= n;j++)
            {
                if(d[i][j] > d[i][k] + d[k][j] ) d[i][j] = d[i][k] + d[k][j];
            }
        }
    }
}

main()
{
    cin >> n >> m;
    for(int i=1;i <=n;i++) for(int j=1;j <= n;j++) 
    {
        if(i == j) d[i][j] = 0;
        else d[i][j] = 1e8;
    }
    for(int i=0;i <m;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        d[a][b] = c;
        d[b][a] = c;
    }
    floyd();
    cin >> q;
    while(q--)
    {
        int x,y;cin >> x >> y;
        cout << d[x][y] << endl;
    }
}