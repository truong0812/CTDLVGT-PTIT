#include <bits/stdc++.h>
using namespace std;

long long fibo[100],n,k;

void Try()
{
    while (n > 2)
    {
        if(k <= fibo[n-2])
        {
            n-=2;
        }
        else
        {
            k-=fibo[n-2];
            n--;
        }
    }
    if(n==1) cout << "A\n";
    else cout << "B\n";
    
}

main()
{
    fibo[1]=1;fibo[2]=1;
    for(int i=3;i <=92;i++)
    {
        fibo[i]=fibo[i-1] + fibo[i-2];
    }
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try();
    }
}