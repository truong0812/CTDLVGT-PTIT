#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n, kt = 0;
		cin >> n;
		int a[n];
		for (auto &i : a) cin >> i;
		for (int i = n-2 ; i >= 0 ; i--){
			if (a[i] < a[i+1]){
				kt = 1;
				swap(a[n-1], a[i]);
				sort(a+i+1, a+n);
				for (int j = 0 ; j < n ; j++) cout << a[j] << " ";
				cout << endl;
				break;
			}
		}
		if (!kt){
			for (int i = 1 ;i <= n ;i++) cout << i << " ";
			cout << endl;
		}
	}

}

