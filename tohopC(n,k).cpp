#include <iostream>
using namespace std;

int x[1001][1001];
int mod = 1e9 +7;

main()
{
	for(int i= 0;i <= 1000;i++)
	{
		for(int j=0 ;j <=i;j++)
		{
			if(j == 0 || i==j) x[i][j]=1;
			else x[i][j] = (x[i-1][j-1] + x[i-1][j]) % mod;
		}
	}
	int t;cin >> t;
	while(t--)
	{
		int n,k;cin >> n >> k;
		cout << x[n][k] << endl;
	}
}