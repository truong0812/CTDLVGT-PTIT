#include <bits/stdc++.h>
using namespace std;

long long n,k;
long long a[10][10],b[10][10];
long long mod = 1e9 + 7;

void nhanmatran(long long x[10][10],long long y[10][10])
{
    long long tmp[10][10];
    for(int i=0;i <n;i++)
    {
        for(int j=0;j <n;j++)
        {
            long long res=0;
            for(int k=0;k <n;k++)
            {
                res+=(x[i][k] * y[k][j])%mod;;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for (int i=0;i<n;i++ ) for(int j=0;j <n;j++) a[i][j]=tmp[i][j];
}
void mu(long long a[10][10],int n)
{
    if(n <= 1) return;
    mu(a,n/2);
    nhanmatran(a,a);
    if(n&1) nhanmatran(a,b);
}
void Try()
{
    cin >> n >> k;
    for(int i=0;i <n;i++)
    {
        for(int j=0;j <n;j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    mu(a,k);
    long long s=0;
    for(int i=0;i <n;i++)
    {
        s+=a[i][n-1];
        s%=mod;
    }
    cout << s << endl;
}

main()
{
    int t;cin >> t;
    while(t--) {Try();}
}