#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector < int > v;
		int a[n];
		for (auto &i : a){
			cin >> i;
			v.push_back(i);
		}
		sort(a,a + n);
		int i = 0, j = n - 1;
		while (a[i] == v[i]) i++;
		while (a[j] == v[j]) j--;
		cout << i + 1 <<  " " << j + 1 << endl;	
	}

}

