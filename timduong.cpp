#include <bits/stdc++.h>
using namespace std;
int n,m,s1,s2,e1,e2;
char a[505][505];
bool used[505][505];
struct Node{
    int x, y;
    int count;
};
void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='S'){
				s1=i; s2=j;
			}
			if(a[i][j]=='T'){
				e1=i; e2=j;
			}
		}
	}
}
void Solve(){
    memset(used, false, sizeof(used));
    queue<Node> q;
    q.push({s1,s2, -1});
    used[s1][s2] = true;
    while (!q.empty()){
        Node u = q.front();
        q.pop();
        if (u.count > 2){
            cout << "NO"<<endl;
            return;
        }
        if (u.x == e1 && u.y == e2){
            if (u.count <= 2){
                cout << "YES"<<endl;
                return;
            }
        }
        // Down
        for (int i = u.x; i <= n; i++){
            if (a[i][u.y] == '*')break;
            if (!used[i][u.y]){
                q.push({i, u.y, u.count + 1});
                used[i][u.y] = true;
            }
        }
        // Up
        for (int i = u.x; i > 0; i--)
        {
            if (a[i][u.y] == '*')
                break;
            if (!used[i][u.y])
            {
                q.push({i,u.y,u.count + 1});
                used[i][u.y] = true;
            }
        }
        // Right
        for (int i =u.y; i <= m; i++)
        {
            if (a[u.x][i] == '*')break;
            if (!used[u.x][i]){
                q.push({u.x, i, u.count + 1});
                used[u.x][i] = true;
            }
        }
        // Left
        for (int i = u.y; i > 0; i--)
        {
            if (a[u.x][i] == '*')
                break;
            if (!used[u.x][i])
            {
                q.push({u.x, i, u.count + 1});
                used[u.x][i] = true;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
    	inp();
        Solve();
    }
    return 0;
}