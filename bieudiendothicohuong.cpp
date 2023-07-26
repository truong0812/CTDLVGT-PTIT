#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int V,E;cin >> V >> E;
        vector <int> ds[V+5];
        int a,b;
        for(int i=0;i <E;i++)
        {
            cin >> a >> b;
            ds[a].push_back(b);
        }
        for(int i=1;i <= V;i++)
        {
            cout << i << ": ";
            for(auto j:ds[i]) cout << j << " ";
            cout << endl;
        }
    }
}