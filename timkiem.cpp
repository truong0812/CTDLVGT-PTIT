#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,x,a;cin >> n >> x;
        int check=-1;
        for(int i=0;i <n;i++)
        {
            cin >> a;
            if(a == x) check=1;
        }
        cout << check << endl;
    }
}