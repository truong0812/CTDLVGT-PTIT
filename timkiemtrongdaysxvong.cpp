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
		int n, k, x, xx;
		cin >> n >> k;
		for (int i = 1 ; i <= n ; i++){
			cin >> x;
			if (x == k) xx = i; 
		}
		cout << xx << endl;
	}

}

