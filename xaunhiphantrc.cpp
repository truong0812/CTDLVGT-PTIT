#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		string n;
        int kt = 0;
		cin >> n;
		for (int i = n.size()-1 ; i >= 0 ; i--){
			if (n[i] == '1'){
				kt = 1;
				n[i]='0';
				for(int j=i+1;j<n.size();j++) n[j]='1';
				cout << n;
				cout << endl;
				break;
			}
		}
		if (!kt){
			for (int i = 1 ;i <= n.size() ;i++) cout << 1;
			cout << endl;
		}
	}

}

