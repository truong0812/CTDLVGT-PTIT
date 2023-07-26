#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],xuoi[n],doc[n];
		for(int i=0 ;i <n;i++) cin >> a[i];
		xuoi[0] = 1;
		for(int i=1 ;i <n ;i++){
			if(a[i] > a[i-1]) xuoi[i] = xuoi[i-1] +1;
			else xuoi[i] = 1;
		}
		doc[n-1] =1;
		for(int i= n-2 ;i>=0 ;i--){
			if(a[i] > a[i+1]) doc[i] =doc[i+1] +1;
			else doc[i] = 1;
		}
		int kq = -1;
		for(int i=0 ;i < n;i++){
			kq = max(kq, xuoi[i]+doc[i]-1);
		}
		cout << kq <<endl;
	}
}