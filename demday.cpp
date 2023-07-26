#include <bits/stdc++.h>
using namespace std;

long long mod = 123456789;
long long n;

long long luythua(int a,long long b)
{
	if(b==0) return 1;
	long long tmp=luythua(a,b/2);
	if(b%2==0) return (tmp*tmp)%mod;
	return a*(tmp*tmp%mod)%mod;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        cout << luythua(2,n-1) << endl;
    }
}