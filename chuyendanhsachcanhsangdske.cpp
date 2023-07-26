#include <bits/stdc++.h>
using namespace std;

int a,b;
int V,E;

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> V >> E;
        vector <int> ds[V+5];
        for(int i=0;i <E;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        for(int i=1;i <=V;i++)
        {
            cout << i <<": ";
            for(auto j:ds[i]) cout << j << " ";
            cout << endl;
        }
    }
}