#include <bits/stdc++.h>
using namespace std;

int main (){
		int n;
		cin >> n;
		int a[n];
		for (auto &i : a) cin >> i;
		for (int i = 0 ; i < n - 1 ; i++){
			int minn = a[i], k = i ;
			for (int j = i + 1 ; j < n ; j++){
				if (minn > a[j]) {
					minn = a[j];
					k = j;
				}
			}
			swap(a[k], a[i]);
			cout << "Buoc " << i + 1 << ": ";
			for (auto k : a) cout << k << " ";
			cout << endl;
		}
}