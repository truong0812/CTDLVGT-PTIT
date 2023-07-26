#include <bits/stdc++.h>
using namespace std;

long long a[55];

void Try()
{
    for(int i=4;i <=50;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
}

main()
{
    int t;cin >> t;
    a[1]=1;a[2]=2;a[3]=4;
    Try();
    while(t--)
    {
        int n;cin >> n;
        cout << a[n] << endl;
    }
}