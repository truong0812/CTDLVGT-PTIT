#include <bits/stdc++.h>
using namespace std;

int s,d;

main()
{
    int t;cin >> t;
    while(t--)
    { 
        cin >> s >> d;
        if(s == 0 || 9*d < s) cout << "-1\n";
        else
        {
            int m=d;
            int kq[d+1];
            memset(kq,0,sizeof(kq));
            while(s > 0)
            {
                if(s > 9)
                {
                    kq[d]=9;
                    d--;
                    s-=9;
                }
                else
                {
                    kq[d]=s-1;
                    kq[1]=1;
                    break;
                }
            }
            for(int i=1;i <=m;i++) cout << kq[i];
            cout << endl;
        }
    }
}