#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[k],b[k], kt = 0;
		for (auto &i : a) cin >> i;
		for (int i = k-1 ; i >= 0 ; i--){
			if (a[i] < n - k + i + 1) {
				kt = 1;
				a[i]++;
				for (int j = 0 ; j <= i ; j++) b[j]=a[j];
				for (int j = i+1 ; j < k ; j++ ){
					b[j]=b[j-1]+1;
				}
                a[i]--;
				break;
			}
		}
		if (!kt) {
			cout << k << endl;
		}
        else
        {
            int dem=k;
            int test[20]={0};
            for(int i=0;i <k;i++) test[b[i]]=1;
            for(int i=0;i <k;i++)
            {
                if(test[a[i]] == 1) dem--;
            }
            cout << dem << endl;
        }
	}

}

