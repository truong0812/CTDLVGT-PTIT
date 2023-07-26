#include <bits/stdc++.h>
using namespace std;

int Try(int a,int b)
{
    set <int> s;
    queue <pair <int,int>> q;
    q.push({a,0});
    s.insert(a);
    while(!q.empty())
    {
        pair <int,int> x=q.front();q.pop();
        if(x.first == b) return x.second;
        if(x.first*2 == b || x.first-1 == b) return x.second+1;
        if(s.find(x.first*2) == s.end() && x.first < b)
        {
            q.push({x.first*2,x.second+1});
            s.insert(x.first*2);
        }
        if(s.find(x.first - 1) == s.end() && x.first-1 > 0)
        {
            q.push({x.first-1,x.second+1});
            s.insert(x.first-1);
        }
    }
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;cin >> a >> b;
        cout << Try(a,b) << endl;
    }
}