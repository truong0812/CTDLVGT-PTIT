#include <bits/stdc++.h>
using namespace std;
long long a[5001];
int n;
int pytago(){
	for (int i=0; i<n; i++) a[i]=a[i]*a[i];
	sort(a,a+n);
	for (int i=n-1; i>=2; i--){
		int l = 0,r=i-1;
		while (l<r){
		if (a[l]+a[r] == a[i]) return 1;
		if (a[l]+a[r] < a[i]) l++;
		else r--; 
	}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i=0; i<n; i++) cin >> a[i];
		if (pytago()==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}