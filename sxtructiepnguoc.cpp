#include <iostream>
using namespace std;
int b[105][105];
void nhap (int a[], int n){
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void nho (int a[], int n,int x){
	for (int i=0; i<n; i++){
		b[x][i]=a[i];
	}
	
}
void sapxep (int a[], int n){
	int t;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[j] < a[i]){
				t = a[i];
				a[i]=a[j];
				a[j] = t;
			}
		}
		nho(a,n,i);
	}
}

void in(int n)
{
    for(int i=n-1;i >=1;i--)
    {
        cout << "Buoc " << i <<": ";
        for(int j=0;j <n;j++)
        {
            cout << b[i-1][j] << " ";
        }
        cout << endl;
    }
}
main (){
	int t;cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n + 5];
		nhap(a,n);
		sapxep(a,n);
		in(n);
	}
}