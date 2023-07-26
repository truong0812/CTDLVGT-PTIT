#include<bits/stdc++.h>
using namespace std;
int n,s,res,bmin,a[100],b[100][100],kt[100]={0};
void inp(){
    cin>>n;   res=1e9; s=0; bmin=1e9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>b[i][j];
            if(bmin>b[i][j] && b[i][j]!=0){
            	bmin=b[i][j];
			}
        }
    }
}
void ql(int i){
    for(int j=2;j<=n;j++){
        if(kt[j]==0){
            a[i]=j;
            kt[j]=1;
            s+=b[a[i-1]][j];
            if(i==n){
                if(s+b[j][1]<res){
                    res=s+b[j][1];
                }
            }
            else if(s+(n-i+1)*bmin < res) ql(i+1);
            s-=b[a[i-1]][j];   // neu chi phi s + chi phi den cac tp con lai <res thi ta tim tiep
            kt[j]=0;
        }
    }
}
int main(){
    inp();
    a[1]=1;
    ql(2);
    cout<<res<<endl;
}