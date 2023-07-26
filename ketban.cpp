#include <bits/stdc++.h>
using namespace std;

vector <int> ke[100001];
bool chuaxet[100001];
int maxx,n,m,a,b;

int bfs(int x)
{
    chuaxet[x] = false;
    int dem=1;
    queue <int> q;
    q.push(x);
    while(!q.empty())
    {
        int t=q.front();q.pop();
        for(int i:ke[t])
        {
            if(chuaxet[i]) 
            {
                chuaxet[i] = false;
                q.push(i);
                dem++;
            }
        }
    }
    return dem;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=1;i <= n ;i++) ke[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i < m;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        maxx=0;
        for(int i=1;i <= n;i++)
        {
            if(chuaxet[i])
            {
                maxx = max(maxx,bfs(i));
            }
        }
        cout << maxx << endl;
    }
}