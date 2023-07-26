#include <bits/stdc++.h>
using namespace std;

int find(int *a,int n,int x)
{
	for(int i=0;i < n;i++)
	{
		if(x == a[i]) return i;
	}
	return -1;
}

void posorder(int n,int *ino,int *pre)
{
	int i=find(ino,n,pre[0]);
	if(i != 0) posorder(i,ino,pre+1);
	if(i != n-1) posorder(n-1-i,ino+i+1,pre+i+1);
	cout << pre[0] << " ";
}

main()
{
	int t;cin >> t;
	while(t--)
	{
		int n;cin >> n;
		int ino[n],pre[n];
		for(int i=0;i <n;i++) cin >> ino[i];
		for(int i=0;i <n;i++) cin >> pre[i];
		posorder(n,ino,pre);
		cout << endl;
	}
}