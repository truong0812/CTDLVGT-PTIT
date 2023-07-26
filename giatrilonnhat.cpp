#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a > b;
}
int main(){
	int n; cin>>n;
	int a[n];
    long long s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
        if(a[i] > 0) s += (a[i] * 2);
	}
    cout << s << endl;
}