#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val = v;
        left = right = NULL;
    }
};

void levelOrderPrint (Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        //step 1:
        Node* temp = q.front();
        q.pop();

        //step2:
        cout << temp->val << " ";

        //step3:
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main()
{
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);
    root->right = a;
    root->left = b;
    b->right= d;
    b->left = e;
    d->right = i;
    d->left = h;
    e->left = g;
    a->left= c;
    c->right= f;
    levelOrderPrint(root);
    return 0;
}