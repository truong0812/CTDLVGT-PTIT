#include <bits/stdc++.h>
using namespace std;

long long k;
long long a[2][2],b[2][2];
long long mod = 1e9 + 7;

void nhanmatran(long long x[2][2],long long y[2][2])
{
    long long tmp[2][2];
    for(int i=0;i <2;i++)
    {
        for(int j=0;j <2;j++)
        {
            long long res=0;
            for(int k=0;k <2;k++)
            {
                res+=(x[i][k] * y[k][j])%mod;;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for (int i=0;i<2;i++ ) for(int j=0;j <2;j++) a[i][j]=tmp[i][j];
}
void mu(long long a[2][2],int n)
{
    if(n <= 1) return;
    mu(a,n/2);
    nhanmatran(a,a);
    if(n%2 == 1) nhanmatran(a,b);
}
void Try()
{
    cin >> k;
    a[0][0] = 1;b[0][0] = 1;a[1][0]=1;b[1][0]=1;a[0][1]=1;b[0][1]=1;a[1][1]=0;b[1][1]=0;
    mu(a,k-1);
    cout << a[0][0] << endl;
}

main()
{
    int t;cin >> t;
    while(t--) {Try();}
}