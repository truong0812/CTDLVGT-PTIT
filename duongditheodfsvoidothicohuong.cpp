#include <bits/stdc++.h>
using namespace std;

vector <int> ds[1005];
bool chuaxet[1005];
int v,e,d,c;
vector <int> kq;
bool ok;

void resert()
{
    for(int i=1;i <=1000;i++) ds[i].clear();
    memset(chuaxet,true,sizeof(chuaxet));
    kq.clear();
    ok=false;
}

void dfs(int x)
{
    if(ok) return;
    chuaxet[x]=false;
    if(x == c) 
    {
        ok=true;
        for(auto i:kq) cout << i << " ";
        cout << c ;
        return;
    }
    for(int i=0;i <ds[x].size();i++)
    {
        if(chuaxet[ds[x][i]]) 
        {
            kq.push_back(x);
            dfs(ds[x][i]);
            kq.pop_back();
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        resert();
        cin >> v >> e >> d >> c;
        int a,b;
        for(int i=0;i <e;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
        }
        dfs(d);
        if(!ok) cout << "-1";
        cout << endl;
    }
}