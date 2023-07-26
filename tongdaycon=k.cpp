#include <bits/stdc++.h>
using namespace std;
int b[100] = {0}, n , kk, m = 0;
void sinh(int a[], int k){
	for (int i = 0 ; i < 2 ; i++){
		b[k] = i ;
		if (k == n - 1){
			long long s = 0;
			for (int j = 0 ; j < n ; j++){
				if (b[j]) s += a[j];
			}
			if (s == kk) {
				for (int j = 0 ; j < n ; j++) if (b[j]) cout << a[j] << "	";
				cout << endl ;
				m++;
			}
		}
		else sinh(a, k+1);
	}
}

int main (){
	cin >> n >> kk;
	int a[n];
	for (auto &i : a) cin >> i;
	sinh (a,0);
	cout << m << endl;

}

