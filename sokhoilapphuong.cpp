#include<bits/stdc++.h>
using namespace std;
bool ktra(string a, string b){
	int i = 0, j = 0;
	while (i < a.length() && j < b.length()) {
		if (a[i] == b[j]) {
			i++; j++;
		}
		else i++;
	}
	if(j==b.length()) return true;
	else return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long res = -1;
		for (int i = 1; i <= 100; i++) {
			long long x = i * i * i;
			if (ktra(s, to_string(x))) {
				res = x;
			}
		}
		cout << res << endl;
	}
}