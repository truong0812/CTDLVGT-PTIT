#include <bits/stdc++.h>
using namespace std;
long long a;long long b;
int mod =1e9 + 7;
long long luythua(long long a,long long b)
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
		cin >> a ;
        b=0;
        long long x=a;
        while(x > 0)
        {
            int c=x%10;
            b=b*10+c;
            x/=10;
        }
        if(a==0) break;
		else cout << luythua(a,b) << endl;
	}
}