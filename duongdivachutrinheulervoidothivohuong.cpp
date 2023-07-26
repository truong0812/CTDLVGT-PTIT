#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
int dem,deml;
bool chuaxet[1005];
int n,v,a,b;

void DFS(int x)
{
    for(int i=0;i <ke[x].size();i++)
    {
        if(chuaxet[ke[x][i]])
        {
            chuaxet[ke[x][i]] = false;
            DFS(ke[x][i]);
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {

        memset(chuaxet,true,1005);
        dem=0;
        deml=0;
        for(int i =0;i <=1000;i++) ke[i].clear();
        cin >> n >> v;
        for(int i=0;i <v;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for(int i=1;i <=n;i++)
        {
            if(ke[i].size()%2==1) deml++;
            if(chuaxet[i]) 
            {
                DFS(i);
                dem++;
            }
        }
        if(dem != 1 || (deml != 0 && deml != 2)) cout << "0\n";
        else if(deml == 0) cout << "2\n";
        else cout << "1\n";
    }
}