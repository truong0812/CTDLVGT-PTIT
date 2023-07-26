#include <bits/stdc++.h>
using namespace std;

int main (){
		int n, aa;
		cin >> n;
		int a[n];
		multiset <int> m;
		for (int j = 0 ; j < n ; j++){
			cin >> aa;
			m.insert(aa);
			cout << "Buoc " <<  j << ": ";
			for (auto i : m) cout << i << " " ;
			cout << endl;
		}
}
