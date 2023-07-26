#include <bits/stdc++.h>
using namespace std;
struct Array{
    int arr[10][10];
    int cnt;
};
void Turn_Right(int a[10][10]){
    int x = a[0][1], y = a[0][2], z = a[1][1], t = a[1][2];
    a[0][1] = z, a[0][2] = x, a[1][1] = t, a[1][2] = y;
}
void Turn_Left(int a[10][10]){
    int x = a[0][0], y = a[0][1], z = a[1][0], t = a[1][1];
    a[0][0] = z, a[0][1] = x, a[1][0] = t, a[1][1] = y;
}
bool Check(int a[10][10],int b[10][10]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] != b[i][j]){
                return false;
            }
        }
    }
    return true;
}
void Solve(){
	Array m; m.cnt=0;
	int b[10][10];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>m.arr[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
    queue<Array> q;
    q.push(m);
    while (!q.empty()){
        Array tmp = q.front();  q.pop();
        if (Check(tmp.arr, b)){
            cout<<tmp.cnt<<endl;
            return;
        }
        Array m1 = tmp, m2 = tmp;
        Turn_Left(m1.arr);
        Turn_Right(m2.arr);
        m1.cnt = m2.cnt = tmp.cnt + 1;
        q.push(m1);
        q.push(m2);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        Solve();
    }
    return 0;
}