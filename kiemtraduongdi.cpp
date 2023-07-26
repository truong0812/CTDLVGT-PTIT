#include <bits/stdc++.h>
using namespace std;

vector <int> ds[1005];
bool chuaxet[1005];
int v,e,d,c;

bool ok;

void resert()
{
    ok=false;
    memset(chuaxet,true,sizeof(chuaxet));
}

void dfs(int x,int c)
{
    if(ok) return;
    chuaxet[x]=false;
    if(x == c) 
    {
        ok=true;
        return;
    }
    for(int i=0;i <ds[x].size();i++)
    {
        if(chuaxet[ds[x][i]]) 
        {
            dfs(ds[x][i],c);
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=1;i <=1000;i++) ds[i].clear();
        cin >> v >> e;
        int a,b;
        for(int i=0;i <e;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        int q;cin >> q;
        while(q--)
        {
            cin >> d >> c;
            resert();
            dfs(d,c);
            if(ok) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}