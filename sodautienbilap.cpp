#include <bits/stdc++.h>
using namespace std;
main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		int check = 1;
		map <int, int> s;
		for (int i=0; i<n; i++) cin >> a[i];
		for (int i=0; i<n; i++){
			s[a[i]]++;
		}
		for (int i=0; i<n; i++){
			if (s[a[i]]==2){
				check = 0;
				cout << a[i] << endl;
				break;
			}
		}
		if (check) cout << "NO" << endl;
	}
}