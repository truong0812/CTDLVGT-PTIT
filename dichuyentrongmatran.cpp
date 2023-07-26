#include <bits/stdc++.h>
using namespace std;
int n,m;
int x[105][105];
int a[105][105];


main()
{
    for(int i= 0;i <= 200;i++)
	{
		for(int j=0 ;j <=i;j++)
		{
			if(j == 0 || i==j) x[i][j]=1;
			else x[i][j] = (x[i-1][j-1] + x[i-1][j]);
		}
	}
    int t;cin >> t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        cin >> n >> m;
        for(int i=0;i <n;i++) for(int j=0;j <m;j++) cin >> a[i][j];
        cout << x[n+m-2][n-1] << endl;
        
    }
}