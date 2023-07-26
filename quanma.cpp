#include <bits/stdc++.h>
using namespace std;

int B[10][10];

struct data
{
    int x,y;
};

data xuly(string x)
{
    data A;
    A.x = int(x[0] - 'a' + 1);
    A.y = int(x[1] - '0');
    return A;
}

void Try(data st, data end)
{
    queue <data> q;
    q.push(st);
    while(!q.empty())
    {
        data z=q.front();q.pop();
        if(z.x == end.x && z.y == end.y) {cout << B[z.x][z.y] << endl;return;}
        if(z.x - 2 > 0 && z.y - 1 > 0 && B[z.x-3][z.y-1] == 0) {B[z.x-2][z.y-1] = B[z.x][z.y] + 1;q.push({z.x-2,z.y-1});}
        if(z.x - 1 > 0 && z.y - 2 > 0 && B[z.x-1][z.y-2] == 0) {B[z.x-1][z.y-2] = B[z.x][z.y] + 1;q.push({z.x-1,z.y-2});}
        if(z.x - 2 > 0 && z.y + 1 <= 8 && B[z.x-2][z.y+1] == 0) {B[z.x-2][z.y+1] = B[z.x][z.y] + 1;q.push({z.x-2,z.y+1});}
        if(z.x + 1 <= 8 && z.y - 2 > 0 && B[z.x+1][z.y-2] == 0) {B[z.x+1][z.y-2] = B[z.x][z.y] + 1;q.push({z.x+1,z.y-2});}
        if(z.x + 2 <= 8 && z.y - 1 > 0 && B[z.x+2][z.y-1] == 0) {B[z.x+2][z.y-1] = B[z.x][z.y] + 1;q.push({z.x+2,z.y-1});}
        if(z.x - 1 > 0 && z.y + 2 <= 8 && B[z.x-1][z.y+2] == 0) {B[z.x-1][z.y+2] = B[z.x][z.y] + 1;q.push({z.x-1,z.y+2});}
        if(z.x + 1 <= 8 && z.y + 2 <= 8 && B[z.x+1][z.y+2] == 0) {B[z.x+1][z.y+2] = B[z.x][z.y] + 1;q.push({z.x+1,z.y+2});}
        if(z.x + 2 <= 8 && z.y + 1 <= 8 && B[z.x+2][z.y+1] == 0) {B[z.x+2][z.y+1] = B[z.x][z.y] + 1;q.push({z.x+2,z.y+1});}
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(B,0,sizeof(B));
        string s1,s2;cin >> s1 >> s2;
        data st = xuly(s1);
        data end = xuly(s2);
        Try(st,end);
    }
}