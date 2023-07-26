#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	int cnt=0;
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
		a[l]=x[i]; l++; i++;
	}
	while(j<y.size()){
		a[l]=y[j]; l++; j++;
	}
	return cnt;
}
int mergesort(int a[],int l,int r){
	int dem=0;
	if(l<r){
		int m=(l+r)/2;
		dem+=mergesort(a,l,m);
		dem+=mergesort(a,m+1,r);
		dem+=merge(a,l,m,r);
    }
    return dem;
}
int main(){
	int n; cin>>n;
	int a[n],b[n],cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			b[cnt]=a[i];
			cnt++;
		}
	}
	int dem=mergesort(b,0,cnt-1);
	for(int i=0;i<n-1;i++){
		if(a[i]%2==0){
			for(int j=i+1;j<n;j++){
				if(a[j]%2==0){
					if(a[i]>a[j]) dem--;
				}
				else break;
			}
		}
	}
	cout<<dem<<endl;
}