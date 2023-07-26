#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		int n = a.size() - 1; 
		while (a[n] == '1') a[n--] = '0';
		a[n] = '1';
		cout << a << endl;
	}

}

