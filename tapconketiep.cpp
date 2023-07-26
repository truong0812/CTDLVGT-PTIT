#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[k], kt = 0;
		for (auto &i : a) cin >> i;
		for (int i = k-1 ; i >= 0 ; i--){
			if (a[i] < n - k + i + 1) {
				kt = 1;
				a[i]++;
				for (int j = 0 ; j <= i ; j++) cout << a[j] << " ";
				for (int j = i+1 ; j < k ; j++ ){
					cout << ++a[i] << " ";
				}
				cout << endl;
				break;
			}
		}
		if (!kt) {
			for (int i = 1 ; i <= k ; i++) cout << i << " ";
			cout << endl;
		}
	}

}

