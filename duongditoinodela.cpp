#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool chuaxet[1005];
int trc[1005];

void reset()
{
    for(int i=0;i <= 1000;i++) ke[i].clear();
    memset(chuaxet,true,1005);
    memset(trc,1,1005);
}

void bfs(int x)
{
    queue <int> q;
    q.push(x);
    while(!q.empty())
    {
        int t=q.front();q.pop();
        for(auto i:ke[t])
        {
            if(chuaxet[i])
            {
                chuaxet[t] = false;
                trc[i] = t;
                q.push(i);
            }
        }
    }   
}

void duongdi(int x)
{
    stack <int> kq;
    int u=x;
    while(u != 1)
    {
        kq.push(u);
        u = trc[u];
    }
    cout << "1 ";
    while(!kq.empty())
    {
        cout << kq.top() << " "; kq.pop();
    }
    cout << endl;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        reset();
        int n;cin >> n;
        for(int i=1;i < n;i++)
        {
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
        }
        bfs(1);
        for(int i=1;i <= n;i++)
        {
            if(chuaxet[i]) duongdi(i);
        }
    }
}