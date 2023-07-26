#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int m = a[1]-a[0];
		for (int i=1; i<n-1; i++){
			if (a[i+1]-a[i] < m) m = a[i+1]-a[i];
		}
		cout << m << endl;
	}
}