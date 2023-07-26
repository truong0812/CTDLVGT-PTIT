#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool chuaxet[1005];
int n,v,dem,res,a,b;

void DFS(int x)
{
    chuaxet[x] = false;
    for(int i=0;i < ke[x].size();i++)
    {
        if(chuaxet[ke[x][i]])
        {
            DFS(ke[x][i]);
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=1;i <=1000;i++) ke[i].clear();
        cin >> n >> v;
        for(int i=0;i <v;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        memset(chuaxet,true,1005);
        res=0;
        for(int i=1;i <=n;i++)
        {
            if(chuaxet[i]) 
            {
                DFS(i);
                res++;
            }
        }
        for(int i=1;i <=n;i++)
        {
            memset(chuaxet,true,1005);
            chuaxet[i]=false;
            dem=0;
            for(int j=1;j <=n;j++)
            {
                if(chuaxet[j])
                {
                    DFS(j);
                    dem++;
                }
            }
            if(dem > res) cout << i << " ";
        }
        cout << endl;
    }
}