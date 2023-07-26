#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	return a > b;
}

main()
{
	int n;cin >> n;
	int chan[n],le[n];
	int demc=0,deml=0;
	for(int i=1;i <=n;i++)
	{
		if(i%2==0)
		{
			cin >> chan[demc];
			demc++;
		}
		else
		{
			cin >> le[deml];
			deml++;
		}
	}
	sort(chan,chan+demc,cmp);
	sort(le,le+deml);
	for(int i=0;i<demc;i++)
	{
		cout << le[i] << " " << chan[i] << " ";
	}
	if(n%2 != 0) cout << le[deml-1];
}