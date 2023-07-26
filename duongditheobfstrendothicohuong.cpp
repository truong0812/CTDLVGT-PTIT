#include <bits/stdc++.h>
using namespace std;

vector <int> ds[1005];
int kq[1005];
int v,e,d,c;
bool ok,chuaxet[1005];

void resert()
{
    for(int i=0;i <=1000;i++) ds[i].clear();
    memset(kq,0,sizeof(kq));
    ok=false;
    memset(chuaxet,true,sizeof(chuaxet));
}

void bfs()
{
    queue <int> s;
    s.push(d);
    while(!s.empty())
    {
       int x=s.front();s.pop();
       chuaxet[x]=false;
       if(x == c) return;
       for(int i=0;i < ds[x].size();i++)
       {
           if(chuaxet[ds[x][i]])
           {
               chuaxet[ds[x][i]] = false;
               kq[ds[x][i]] = x;
               s.push(ds[x][i]);
           }
       }
    }
}

void in()
{
    if(chuaxet[c]) 
    {
        cout << "-1\n";
        return;
    }
    else
    {
        stack <int> a;
        int u=c;
        while(u != d)
        {
            a.push(u);
            u = kq[u];
        }
        cout << d << " ";
        while(!a.empty())
        {
            cout << a.top() << " " ;a.pop();
        }
        cout << endl;
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        resert();
        cin >> v >> e >> d >> c ;
        int a,b;
        for(int i=0;i <e;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
        }
        bfs();in();
        
    }
}