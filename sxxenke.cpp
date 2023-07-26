#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	return a > b;
}

main()
{
	int t;cin >> t;
	while(t--)
	{
		int n;cin >> n;
		int a[n+5];
		for(int i=0;i <n;i++) cin >> a[i];
		sort(a,a+n,cmp);
		int i=0;
		while(i < n-i)
		{
			if(i==n-1-i) cout << a[i] << " ";
			else cout << a[i] << " " << a[n-1-i] << " ";
			i++;
		}
		cout << endl;
	}
}