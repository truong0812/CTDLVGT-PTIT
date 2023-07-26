#include <bits/stdc++.h>
using namespace std;

int level;
bool ok;

struct Node
{
    int data;
    Node *l;
    Node *r;
    Node(int x)
    {
        data=x;
        l=NULL;
        r=NULL;
    }
};

typedef Node* node;

void tao_node(node &x,int b,char c)
{
    if(c == 'L') x->l = new Node(b);
    if(c == 'R') x->r = new Node(b);
}

void tao_cay(node x,int a,int b,int c)
{
    if(x == NULL) return;
    if(x->data == a) tao_node(x,b,c);
    tao_cay(x->l,a,b,c);
    tao_cay(x->r,a,b,c);
}

void check(node x,int lv)
{
    if(x == NULL) return;
    if(x->l == NULL && x -> r == NULL)
    {
        if(level == -1) level = lv;
        else if(level != lv) 
        {
            ok=false;
            return;
        }
    }
    check(x->l,lv+1);
    check(x->r,lv+1);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin>>n;
		node x=NULL;
		level=-1;
		ok=true;
		for(int i=0;i<n;i++){
			int a,b; char c;
			cin>>a>>b>>c;
			if(x==NULL){
				x=new Node(a);
				tao_node(x,b,c);
			}
			else{
				tao_cay(x,a,b,c);
			}
		}
		check(x,1);
		cout << ok << "\n";
    }
}