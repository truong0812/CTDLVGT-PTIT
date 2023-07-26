#include <bits/stdc++.h>
using namespace std;

long long gtr[200001],socon[200001];
vector <int> ke[200001];

void dfs(int x)
{
    for(auto i:ke[x])
    {
        dfs(i);
        gtr[x] +=gtr[i];
        socon[x] += socon[i] + 1;
    }
    gtr[x] += socon[x];
}

main()
{
    int n;cin >> n;
    for(int i=1;i <= n;i++)
    {
        gtr[i] = 1;
        socon[i] = 0;
    }
    for(int i=2;i <= n;i++)
    {
        int a;cin >> a;
        ke[a].push_back(i);
    }
    dfs(1);
    for(int i=1;i <= n;i++) cout << gtr[i] << " ";
}