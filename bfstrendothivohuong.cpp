#include <bits/stdc++.h>
using namespace std;

vector <int> ds[1005];
int v,e,u,a,b;
bool chuaxet[1005];

void bfs(int x)
{
    deque <int> dq;
    dq.push_back(x);
    chuaxet[x]=false;
    while(!dq.empty())
    {
        int z=dq.front();dq.pop_front();
        cout << z << " ";
        for(auto i:ds[z])
        {
            if(chuaxet[i])
            {
                dq.push_back(i);
                chuaxet[i]=false;
            }
        }
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
        bfs(u); cout << endl;
    }
}