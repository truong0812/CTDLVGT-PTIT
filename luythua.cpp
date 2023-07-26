#include <bits/stdc++.h>
using namespace std;
int a;long long b;
int mod =1e9 + 7;
long long luythua(int a,long long b)
{
	if(b==0) return 1;
	long long tmp=luythua(a,b/2);
	if(b%2==0) return (tmp*tmp)%mod;
	return a*(tmp*tmp%mod)%mod;
}
main()
{
	while(true)
	{
		cin >> a >> b;
		if(a==0 && b==0) break;
		else cout << luythua(a,b) << endl;
	}
}