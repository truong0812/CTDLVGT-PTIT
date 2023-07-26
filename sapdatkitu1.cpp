#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        int a[30]={0};
        int n=s.size();
        for(int i=0;i <n;i++){
            a[int(s[i] - 'a')]++;
        }
        int maxx=0;
        for(int i=0;i <26;i++)
        {
            if(maxx < a[i]) maxx = a[i];
        }
        ì(maxx <= n-maxx && n%2==0) cout <<"1\n";
        else if(maxx <= n/2+1 && n%2==1) cout << "1\n";
        else cout << "-1\n";
    }
}