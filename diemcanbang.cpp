#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		int a[n];
		long long sumr=0,suml=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sumr+=a[i];
		}
		suml=a[0]; sumr=sumr-a[0]-a[1];
		int i=1;
		bool ok=true;
		while(i<n-1){
			if(suml == sumr){
				cout<<i+1<<endl;
				ok=false;
				break;
			}
			else{
				suml+=a[i];
				sumr-=a[i+1];
				i++;
			}
		}
		if(ok) cout<<-1<<endl;
	}
}