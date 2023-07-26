#include <iostream>
using namespace std;
void nhap (int a[], int n){
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void in (int a[], int n){
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void sapxep (int a[], int n){
	int t;
	for (int i=0; i<n-1; i++){
		cout << "Buoc " << i+1 << ": ";
		for (int j=i+1; j<n; j++){
			if (a[j] < a[i]){
				t = a[i];
				a[i]=a[j];
				a[j] = t;
			}
		}
		in(a,n);
	}
}
main (){
	int n;
	cin >> n;
	int a[n];
	nhap(a,n);
	sapxep(a,n);
}