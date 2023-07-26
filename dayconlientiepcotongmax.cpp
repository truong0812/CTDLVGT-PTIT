#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int a[n+5];
        int maxx;
        bool ktrd=false;
        for(int i=0;i <n;i++) 
        {
            cin >> a[i];
            if (i == 0) maxx=a[i];
            if(a[i] > 0) ktrd=true;
            maxx = max(a[i],maxx);
        }
        if(!ktrd) cout << maxx << endl;
        else
        {
            int s=0;
            for(int i=0;i <n;i++)
            {
                if(s+a[i] < 0)
                {
                    s=0;
                    continue;
                }
                else s+=a[i];
                maxx = max(maxx,s);
            }
            cout << maxx << endl;
        }
    }
    
}