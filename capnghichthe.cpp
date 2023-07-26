#include<bits/stdc++.h>
using namespace std;
long long dem=0;
long long merge(long long a[],int l,int m,int r){
	vector<long long> x(a+l,a+m+1);
	vector<long long> y(a+m+1,a+r+1);
	int i=0,j=0;
	long long cnt=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<=y[j]){
			a[l]=x[i];
			l++; i++;
		}
		else{
			cnt+=x.size()-i;
			a[l]=y[j];
			l++; j++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++; i++;
	}
	while(i<y.size()){
		a[l]=y[j];
		l++; j++;
	}
	return cnt;
}
void mergesort(long long a[],int l,int r){
	if(l>=r) return;
	int m=(l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	dem+=merge(a,l,m,r);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long a[n]; dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		mergesort(a,0,n-1);
		cout<<dem<<endl;
	}
}