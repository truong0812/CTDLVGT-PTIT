#include <bits/stdc++.h>
using namespace std;

int dem;

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

void duyet_cay(node a)
{
    if( a == NULL) return;
    if(a->l != NULL || a->r != NULL) dem++;
    duyet_cay(a->l);
    duyet_cay(a->r);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int x;
        node a = NULL;
        dem = 0;
        while(n--)
        {
            cin >> x;
            them_node(a,x);
        }
        duyet_cay(a);
        cout << dem << endl;
        
    }
}