#include <bits/stdc++.h>
using namespace std;

int x[] ={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,dem=0;cin >> n;
        for(int i=9;i >=0;i--)
        {
            dem+=(n/x[i]);
            n%=x[i];
        }
        cout << dem << endl;
    }
}