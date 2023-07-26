#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,s,m;cin >> n >> s >> m;
        int d=s-(s/7);
        if(s*m > n*d) cout <<"-1\n";
        else 
        {if((s*m)%n==0) cout << (s*m)/n << endl;
        else cout << (s*m)/n +1 << endl;}
    }
}