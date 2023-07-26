/*
(1) coi a[i]/b[i]=a[i+1]/b[i+1]=....=i
(2) tim double i=max => b[i]=min
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int m=1e9,a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		m=min(m,a[i]);
	}
	int res=1e9;
	for(int i=1;i<=m;i++){
		bool ok=true;
		int x=0;
		for(int j=0;j<n;j++){  //(1)
			double tmp1=a[j]/i;
			double tmp2=a[j]/(i+1);
			int tmp=(int)tmp2+1; //(2)
			if(tmp<=tmp1){
				x+=tmp;
			}
			else{
				ok=false;
				break;
			}
		}
		if(ok){
			res=min(res,x);
		}
	}
	cout<<res<<endl;
}