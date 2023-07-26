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
		int n;
		cin >> n;
		int a[n];
		for (auto &i : a) cin >> i;
		int s = a[0] + a[1];
		for (int i = 0 ; i < n-1 ; i++) {
			for (int j = i + 1 ; j < n ; j++){
				if (abs(s) > abs(a[i] + a[j])) s = a[i] + a[j]; 
			}
		}
		cout << s << endl;
	}

}

