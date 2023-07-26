#include <bits/stdc++.h>
using namespace std;

int level;

struct Node
{
    int data;
    Node *l;
    Node *r;
    Node(int x)
    {
        data = x;
        l =NULL;
        r = NULL;
    }
};

typedef Node* node;

void them_node(node &a,int x)
{
    if(a == NULL) a = new Node(x);
    if(a->data > x) them_node(a->l,x);
    if(a->data < x) them_node(a->r,x);
}

void duyet_cay(node a,int lv)
{
    if( a == NULL) return;
    if(a->l == NULL || a->r == NULL) level = max(level,lv);
    duyet_cay(a->l,lv+1);
    duyet_cay(a->r,lv+1);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int x;
        node a = NULL;
        level = 0;
        while(n--)
        {
            cin >> x;
            them_node(a,x);
        }
        duyet_cay(a,0);
        cout << level << endl;
        
    }
}