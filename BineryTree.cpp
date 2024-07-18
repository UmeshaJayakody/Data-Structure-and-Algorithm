#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

void preOder( node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preOder( root->left);
    preOder( root->right); 
}

void InOder( node* root){
    if(root==nullptr){
        return;
    }
    InOder( root->left);
    cout<<root->data<<" ";
    InOder( root->right);
}

void PostOder( node* root){
    if(root==nullptr){
        return;
    }
    PostOder( root->left);
    PostOder( root->right);
    cout<<root->data<<" ";
}

node* create() {
    int x;
    cout << "Enter value: (-1 for no node) : ";
    cin >> x;
    if (x == -1) {
        return nullptr; 
    }
    node* newnode = new node(); 
    newnode->data = x;
    cout << "left child of "<<x<<"-> " ;
    newnode->left = create();
    cout << "right child of "<<x<<"-> ";
    newnode->right = create();
    return newnode;
}

int main() {
    node* root;
    root = create();
    cout<<"pre oder traversal : ";
    preOder(root);
    cout<<"\nin oder traversal : ";
    InOder(root);
    cout<<"\npost oder traversal : ";
    PostOder(root);
    return 0;
}
