#include <bits/stdc++.h>
using namespace std;

bool ok[1005];
int n,e,d,c,a,b;
vector <int> ke[1005];
int trc[1005];

void DFS(int u,int v)
{
    if(ok[v]) return;
    ok[u]=true;
    for(int i=0;i <ke[u].size();i++)
    {
        if(!ok[ke[u][i]])
        {
            trc[ke[u][i]] = u;
            DFS(ke[u][i],v);
        }
    }
}

void Trace(int u,int v)
{
    if(!ok[v])
    {
        cout << -1;
        return;
    }
    vector <int> a;
    while(u != v)
    {
        a.push_back(u);
        u = trc[u];
    }
    a.push_back(v);
    reverse(a.begin(),a.end());
    for(int i=0;i <a.size();i++)
    {
        cout << a[i] << " ";
    }
}


main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(ok,false,sizeof(ok));
        memset(trc,0,sizeof(trc));
        for(int i=0;i <=1000;i++) ke[i].clear();
        int n,e,d,c;
        cin >> n  >> e >> d >> c;
        for(int i=0;i <e;i++)
        {
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        DFS(d,c);
        Trace(c,d);
        cout << endl;
    }
}