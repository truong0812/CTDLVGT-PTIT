#include <bits/stdc++.h>
using namespace std;
main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		map <int,int> s;
		for (int i=0; i<n; i++){
			s[a[i]]++;
		}
		int m = 0,kq;
		for (auto i:s){
			if (i.second > m){
				m = i.second;
				kq = i.first;
			}
		}
		if (m > n/2) cout << kq << endl;
		else cout << "NO" << endl;
	}
}