#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;cin >> t;
    while(t--)
    {
        long max=-10e8+5,min=10e8+5;
        int n,m;cin >> n >> m;
        long x;
        for(int i=0;i <n;i++) 
        {
            cin >> x;
            if(max < x) max = x;
        }
        for(int i=0;i <m;i++)
        {
            cin >> x;
            if(min > x) min=x;
        }
        cout << max*min << endl;
    }
}