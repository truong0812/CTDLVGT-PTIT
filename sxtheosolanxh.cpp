#include <bits/stdc++.h>
using namespace std;
int f[100000] = {};
bool tmp(int a, int b){
	return (f[a] > f[b] || (f[a] == f[b] && a < b));
}
int main (){
	int t;
	cin >> t;
	while (t--){
		memset(f, 0, 100000);
		int n;
		cin >> n;
		int a[n];
		for (auto &i : a) {
			cin >> i;
			f[i] ++;
		}
		sort(a, a+n, tmp);
		for (auto i : a) cout << i << " ";
		cout << endl;
	}
}

