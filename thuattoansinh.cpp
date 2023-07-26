#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n;

bool kt(){
	for (int i = 1 ; i <= n/2 ; i++){
		if (a[i] != a[n - i + 1]) return false; 
	}
	return true;
}
void sinh(int k){
	for (int i = 0 ; i < 2 ; i++){
		a[k] = i;
		if (k == n) {
			if (kt()) {
				for (int j = 1 ; j <= n ; j++) cout << a[j] << " ";
				cout << endl;
			}
			 
		}
		else sinh(k+1);
	}
}
int main (){
	cin >> n;
	sinh(1);
}

