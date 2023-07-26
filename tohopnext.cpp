#include <bits/stdc++.h>
using namespace std;
bool test[50];
int main (){
	int t;
	cin >> t;
	while (t--){
        memset(test,false,sizeof(test));
		int n, k;
		cin >> n >> k;
		int a[k], kt = 0;
		for (int i=0;i <k;i++) 
        {
            cin >>a[i];
            test[a[i]]=true;
        }
        int dem=0;
		for (int i = k-1 ; i >= 0 ; i--){
			if (a[i] < n - k + i + 1) {
				kt = 1;
                a[i]++;
				for (int j = i ; j < k ; j++ ){
                    
					if(!test[a[i]++] ) dem++;
                    
				}
				break;
			}
		}
		if (!kt) {
			cout << k << endl;
		} else cout << dem << endl;
	}

}

