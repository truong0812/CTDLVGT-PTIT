#include <bits/stdc++.h>
using namespace std;

long long luythua(int a,long long b)
{
	if(b==0) return 1;
	long long tmp=luythua(a,b/2);
	if(b%2==0) return (tmp*tmp);
	return a*(tmp*tmp);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        long long n,k;cin >> n >> k;
        long long x = luythua(2,n);
        x/=2;
        while(true)
        {
            if(n==1)
            {
                cout << 1 << endl;
                break;
            }
            else if ( x == k )
            {
                cout << n << endl;
                break;
            }
            else if(k > x)
            {
                k = x - (k-x);

            }
            x/=2;n--;
        }
    }
}