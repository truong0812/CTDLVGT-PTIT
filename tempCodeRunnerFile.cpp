#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int d4=0,d7=0,res4=1e6,res7=1e6;
        for(int i=n;i>=0;i--)
        {
            if(n >= 4*i && (n-4*i)%7 == 0)
            {
                d4=i;
                d7=(n-4*i)/7;
                if(res4 + res7 > d4+d7)
                {
                    res4=d4;
                    res7=d7;
                }
                else if(res4 + res7 == d4 + d7 && res4 > d4)
                {
                    res4=d4;
                    res7=d7;
                }
            }
        }
        if(res7*7 + res4*4 != n) cout << "-1\n";
        else 
        {
            for(int i=0;i <res4;i++) cout << "4";
            for(int i=0;i <res7;i++) cout << "7";
            cout << endl;
        }
    }
}