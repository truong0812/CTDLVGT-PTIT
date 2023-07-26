#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[505][505];

void Try(int x,int y)
{
    a[x][y] = 0;
    if(a[x-1][y-1] == 1) Try(x-1,y-1);
    if(a[x-1][y] == 1) Try(x-1,y);
    if(a[x-1][y+1] == 1) Try(x-1,y+1);
    if(a[x][y-1] == 1) Try(x,y-1);
    if(a[x][y+1] == 1) Try(x,y+1);
    if(a[x+1][y-1] == 1) Try(x+1,y-1);
    if(a[x+1][y] == 1) Try(x+1,y);
    if(a[x+1][y+1] == 1) Try(x+1,y+1);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> m;
        memset(a,0,sizeof(a));
        for(int i=1;i <=n;i++) for(int j=1;j <=m;j++) cin >> a[i][j];
        int dem=0;
        for(int i=1;i <=n;i++) for(int j=1;j <=m;j++) 
        {
            if(a[i][j] == 1)
            {
                Try(i,j);
                dem++;
            }
        }
        cout << dem << endl;
    }
}