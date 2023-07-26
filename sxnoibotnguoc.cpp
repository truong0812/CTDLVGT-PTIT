#include<bits/stdc++.h>
using namespace std;
int dem;
int b[105][105];
void nhap(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void nho(int a[], int n,int x){
    for(int i=0;i<n;i++) b[x][i]=a[i];
}
void sapxep4(int a[], int n){
    int i,j,t,ok;
    for(i=0;i<n;i++){
        ok = true;
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                ok = false;
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
        }
        if(ok) break;
        dem++;
        nho(a,n,dem);
    }
}
main(){
    int t;cin >> t;
    while(t--)
    {
        dem=0;
        memset(b,0,sizeof(b));
        int a[100], n;
        cin >> n;
        nhap(a,n);
        sapxep4(a,n);
      for(int i=dem;i >=1;i--)
      {
            cout << "Buoc " << i <<": ";
            for(int j=0;j < n;j++ )
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}
