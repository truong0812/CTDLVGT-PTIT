#include<bits/stdc++.h>
using namespace std;
long long mod=1e15+7;
struct lt{
	long long pos[10][10]={0};
};
// ham giup ta chia du cho mod k bi tran
long long mul(long long a, long long b){
    long long c = 0;
    while (b) {
        if (b & 1) {
            c += a;
            if (c >= mod) c -= mod;
        }
        a += a; if (a >= mod) a -= mod;
        b /= 2;
    }
    return c;
}
lt nhan(lt a,lt b){
	lt res;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			res.pos[i][j]=0;
			for(int k=0;k<4;k++){
				res.pos[i][j]=(res.pos[i][j]+mul(a.pos[i][k],b.pos[k][j]))%mod;
			}
		}
	}
	return res;
}
lt power(lt a,long long k){
	if(k==1) return a;
	lt x=power(a,k/2);
	if(k%2==0) return nhan(x,x);
	else return nhan(a,nhan(x,x));
}
int main(){
	int t; cin>>t;
	while(t--){
		lt a;
		long long F[10]={0};
		a.pos[0][0] = a.pos[0][1] = a.pos[1][1] = a.pos[1][2] = 1;
		a.pos[1][3] = a.pos[2][1] = a.pos[3][2] = 1;
        F[1] = 1; F[2] = 3; F[3] = 6;
		long long k; cin>>k;
		if(k<=3){
			cout<<F[k]<<endl;
		}
		else{
			lt b=power(a,k-2);
			cout<<(3 * b.pos[0][0] + 3 * b.pos[0][1] + 2 * b.pos[0][2] + 1 * b.pos[0][3]) % mod<<endl;
		}
	}
}