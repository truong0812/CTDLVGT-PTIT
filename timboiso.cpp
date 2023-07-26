#include <bits/stdc++.h>
using namespace std;

long long x;
int n;

void Try()
{
    
    queue <int> q;
    q.push(9);
    while(true)
    {
        x=q.front();q.pop();
        if(x%n == 0) break;
        q.push(x*10);
        q.push(x*10+9);
    }
    cout << x << endl;
}

main()
{
    int t;cin >> t;
    
    while(t--)
    {
        int m=1;
        cin >> n;
        
        while(m < 18)
    }
}