#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x=0; cin>>n;
		long long k; cin>>k;
		long long a[n+5]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(k==0 && a[i]==0) x=1;
		}
		long long sum=0,j=0;
		bool check = false;
	    for(int i = 0; i < n; i++){
	        sum += a[i];
	        while(sum > k){
	        	sum-=a[j];
	        	j++;
			}
	        if((sum == k && sum!=0) || x==1){
	            check = true;
	            break;
	        }
	    }
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}