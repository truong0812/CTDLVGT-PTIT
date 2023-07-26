#include <bits/stdc++.h>
using namespace std;

vector <int> ds[1005];
int v,e,u,a,b;
bool chuaxet[1005];
void dfs(int x)
{
    cout << x << " ";
    chuaxet[x]=false;
    for(auto i:ds[x])
    {
        if(chuaxet[i]) dfs(i);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> v >> e >> u;
        for(int i=0;i <=1000;i++) ds[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i <e;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        dfs(u); cout << endl;
    }
}