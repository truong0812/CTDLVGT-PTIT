#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int d[n+5];
        for(int i=0;i <n;i++) cin >> d[i];
        sort(d,d+n);
        int k=0;
        int i=0;
        long long a=0,b=0;
        while(i < n)
        {
            if(k==0) {a=a*10+d[i];k=1;}
            else {b=b*10+d[i];k=0;}
            i++;
        }
        cout << a+b << endl;
    }
}