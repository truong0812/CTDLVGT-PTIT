#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *l;
	Node *r;
	Node(int x){
		data=x;
		l=NULL;
		r=NULL;
	}
};
typedef Node* node;
void tao_node(node &x,int b,char c){
	if(c=='L') x->l=new Node(b);
	if(c=='R') x->r=new Node(b);
}
void tao_tree(node &x,int a,int b,char c){
	if(x==NULL) return;
	if(x->data==a) tao_node(x,b,c);
	tao_tree(x->l,a,b,c);
	tao_tree(x->r,a,b,c);
}
void duyet_lever(node x){
	if(x==NULL) return;
	queue <node> q;
    vector <int> kq;
	q.push(x);
    int control=1,i=0;
	while(!q.empty()){
		node u=q.front(); q.pop();
		kq.push_back(u->data);
        if(kq.size() == pow(2,i))
        {
            i++;
            if(control == 1)
            {
                for(int i = kq.size() - 1; i >= 0; i--) cout << kq[i] << " ";
            }
            else
            {
                for(int i = 0; i < kq.size(); i++) cout << kq[i] << " ";
            }
            control = 1 - control;
            kq.clear();
        }
		if(u->l != NULL) q.push(u->l);
		if(u->r != NULL) q.push(u->r);
	}
    if(control == 1)
    {
        for(int i = kq.size() - 1; i >= 0; i--) cout << kq[i] << " ";
    }
    else
    {
        for(int i = 0; i < kq.size(); i++) cout << kq[i] << " ";
    }
    kq.clear();
}
int main(){
	int t; cin>>t;
	while(t--){
		node x=NULL;
		int n; cin>>n;
		for(int i=0;i<n;i++){
			int a,b;  char c;
			cin>>a>>b>>c;
			if(x==NULL){
				x=new Node(a);
				tao_node(x,b,c);
			}
			else{
				tao_tree(x,a,b,c);
			}
		}
		duyet_lever(x);
		cout<<endl;
	}
}