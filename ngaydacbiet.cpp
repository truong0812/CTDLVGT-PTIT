#include <bits/stdc++.h>
using namespace std;
int a[100];
bool kt(){
	if (a[5] != 2 || a[3] == 2 || (a[1] == a[2] && a[1] == 0) || a[4] != 2) return 0;
	return 1;
}
void sinh(int n, int k){
	for (int i = 0 ; i <= 2 ; i += 2){
		a[k] = i;
		if (k == n){
			if (kt()){
				for (int j = 1 ; j <= n ; j++){
					if (j == 3 || j == 5) cout << "/";
					cout << a[j];
				}
				cout << endl;
			}
		} 
		else sinh(n, k+1);
	}
}
int main (){
	sinh(8,1);

}

