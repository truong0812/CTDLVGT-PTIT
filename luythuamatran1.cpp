#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int n;
struct Matran{
	long long f[11][11];
};
Matran operator*(Matran A, Matran B){
	Matran C;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			C.f[i][j]=0;
			for (int k=0; k<n; k++){
				C.f[i][j]=(C.f[i][j]+A.f[i][k] * B.f[k][j] %M)%M;
			}
		}
	}
	return C;
}
Matran powMod(Matran A, long long k){
	if (k==1) return A;
	Matran X = powMod(A,k/2);
	if(k%2==0) return X*X;
	return A*X*X;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long k;
		cin >> n >> k;
		Matran A;
		for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> A.f[i][j];
		Matran KQ = powMod(A,k);
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cout << KQ.f[i][j] << " ";
			}
			cout << endl;
		}
	}
}