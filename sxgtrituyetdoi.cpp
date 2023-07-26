#include <bits/stdc++.h>

using namespace std;
int x;
bool tmp(int a, int b){
	return abs(x-a) < abs(x-b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n >> x;
		int a[n];
		for (auto &i : a) cin >> i;
		stable_sort(a, a+n, tmp);
		for (auto i : a) cout << i << " ";
		cout << endl;
	}
}