#include <bits/stdc++.h>
using namespace std;

long long ugly[10005];

void Try()
{
    int i2=1,i3=1,i5=1;
    ugly[1]=1;
    for(int i=2;i <=10000;i++)
    {
        ugly[i] = min(ugly[i2]*2,min(ugly[i3]*3,ugly[i5]*5));
        if(ugly[i] == ugly[i2] * 2) i2++;
        if(ugly[i] == ugly[i3] * 3) i3++;
        if(ugly[i] == ugly[i5] * 5) i5++;

    }
}

main()
{
    Try();
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        cout << ugly[n] << endl;
    }
}