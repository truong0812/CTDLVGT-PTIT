#include <iostream>
using namespace std;

main()
{
	int n,x;
	cin >> n;
	int a[n+5];
	for(int i=0;i <n;i++) cin >> a[i];
	cin >> x;
	for(int i=0;i <n;i++) if(a[i] != x) cout << a[i] << " ";
}