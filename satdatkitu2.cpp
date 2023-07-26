#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;cin >> k;
        string s;cin >> s;n=s.size();
        int a[300]={0};
        int maxx=0;
        for(int i=0;i <n;i++)
        {
            a[s[i]]++;
            if(maxx < a[s[i]]) maxx = a[s[i]];
        }
        if((maxx-1) * (k-1) > n - maxx ) cout << "-1\n" ;
        else cout << "1\n";
    }
}