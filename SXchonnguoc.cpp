#include <bits/stdc++.h>
using namespace std;

int main (){
		int n;
		cin >> n;
		int a[n],b[n+5][n+5];
		for (auto &i : a) cin >> i;
		for (int i = 0 ; i < n-1 ; i++){
			int minn = a[i], k = i ;
			for (int j = i + 1 ; j < n ; j++){
				if (minn > a[j]) {
					minn = a[j];
					k = j;
				}
			}
			swap(a[k], a[i]);
			for(int j=0;j <n;j++) b[i][j]=a[j];
		}
		for(int i=n-2;i >=0;i--)
		{
			cout << "Buoc " << i+1 << ": ";
			for(int j=0;j <n;j++) cout << b[i][j] << " ";
            cout << endl;
		}
}