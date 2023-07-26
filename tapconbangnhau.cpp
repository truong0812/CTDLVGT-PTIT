#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#define faster() std :: ios_base::sync_with_stdio(0); std :: cin.tie(NULL); std :: cout.tie(NULL);
using namespace std;

int main (){
	//faster();
	int t;
	cin >> t;
	while (t--){
		int n, s = 0;
		cin >> n;
		int a[n];
		for (auto &i : a) {
			cin >> i;
			s += i;
		}
		if (s % 2 != 0)  cout << "NO\n" ;
		else {
			sort(a, a+n);
			s /= 2;
			int b[10000] = {0};
			int c[1000] = {}, jj = 1, j = 0, kt = 0;
			for (int i : a){
				if (b[s-i]) {
					cout << "YES\n";
					kt = 1;
					break;
				}
				if ( ! b[i] ) c[j++] = i;
				for (int k = 0 ; k < jj ; k++){
					//if (c[k] + i < s){
					c[j++] = c[k] + i;
					b[c[k] + i] = 1;
		//			}
				} 
				jj = j;
			}
			if (!kt) cout << "NO\n";
			
		}
	}
}

