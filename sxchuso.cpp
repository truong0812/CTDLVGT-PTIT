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
		int n, a, f[100] = {};
		cin >> n;
		while (n--){
			cin >> a;
			if (a == 0) f[0] = 1;
			while (a){
				f[a%10] = 1;
				a /= 10;
			}
		}
		for (int i = 0 ; i < 10 ; i++) if (f[i]) cout << i << " ";
		cout << endl;
	}
}

