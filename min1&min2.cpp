#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;
	while (t--){
		int n, m1 = 1e9, m2 = 1e9, a;
		cin >> n;
		while (n--){
			cin >> a;
			if (a < m1) {
				swap(m1,m2);
				m1 = a;
			}
			else if (a > m1 && a < m2) m2 = a;
		}
		if (m2 == 1e9) cout << "-1\n";
		else cout << m1 << " " << m2 << endl;
	}
}

