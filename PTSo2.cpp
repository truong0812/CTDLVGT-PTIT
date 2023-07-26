#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, OK,dem;
vector <int> s[100]; 
void luu(){
	for (int i=1; i<=k; i++){
		s[dem].push_back(a[i]);
	}
}
void in(){
	for (int i=1; i<=dem; i++){
		cout << "(";
		int p = s[i].size()-1;
		for (int j=0; j<s[i].size()-1; j++){
			cout << s[i][j] << " ";
		}
		cout << s[i][p] << ") ";
	}
}
void sinh(){
	int i = k,s,b,c;
	while (i>0 && a[i]==1) i--;
	if (i==0) OK = 1;
	else{
		a[i]--;
		s = k - i + 1;
		k = i;
		b = s/a[i]; c = s % a[i];
		if (b>0){
			for (int j=i+1; j<=i+b; j++) a[j]=a[i];
			k = k + b;
		}
		if (c>0){
			k++;
			a[k]=c;
		}
	}
}
int main (){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		a[1]=n; k = 1;
		OK = 0;
		dem = 0;
		while (!OK){
			dem++;
			luu();
			sinh();
		}
		cout << dem << endl;
		in();
		cout << endl;
		for(int i=1;i <=100;i++) s[i].clear();
	}
}