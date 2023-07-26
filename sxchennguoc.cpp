#include<bits/stdc++.h>
using namespace std;
int b[105][105];
void nhap(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void nho(int a[],int x){
    for(int i=0;i<=x;i++) b[x][i]=a[i];
}
void sapxep3(int a[], int n){
    int i,j,x;
    
    for(i=1;i<n;i++){
        x = a[i]; j = i-1;
        while(j>=0 && a[j]>x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;

        nho(a,i);
    }
}
main(){
    int a[100], n;
    cin >> n;
    nhap(a,n);
    b[0][0]=a[0];
    sapxep3(a,n);
    for(int i=n-1;i >=0;i--)
    {
        cout << "Buoc " << i << ": ";
        for(int j=0;j <=i;j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
