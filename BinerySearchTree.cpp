#include <iostream>
using namespace std;

struct node {
  int data;
  node *left;
  node *right;
};

// Create a node
node * create(int item) {
    node * newNode = new node();
    newNode->data = item;
    newNode->left =nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root == nullptr) {
    return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  
}

// Insert a node
node * insert(node * root, int key) {
  if (root == nullptr) {
    return create(key);
  }
  if (key < root->data)
    root->left = insert(root->left, key);
  else
    root->right = insert(root->right, key);
  return root;
}


node * minValueNode(node *root) {
  node * current = root;
  while (current->left != nullptr){
    current = current->left;
  }
  return current;
}

// Deleting a node
node * deleteNode(node *root, int key) {
  // fint delete node 
    if (root == nullptr) {return root;}
    else if (key < root->data){root->left = deleteNode(root->left, key);}
    else if (key > root->data){root->right = deleteNode(root->right, key);}
    else{
        // no children
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            root = nullptr;
            return root;
            }
        // one children
        else if (root->left == nullptr) {
            node *temp = root->right;
            return temp;
            }
        else if (root->right == nullptr) {
            node *temp = root->left;
            return temp;
            }
        // two children
        else{
            node *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
            return root;
        }
    }
}

int main() {
  node *root = nullptr;
  root = insert(root, 81);
  root = insert(root, 3);
  root = insert(root, 71);
  root = insert(root, 6);
  root = insert(root, 17);
  root = insert(root, 1);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: ";
  inorder(root);
  cout << "\nAfter deleting 14\n";
  root = deleteNode(root, 14);
  cout << "Inorder traversal: ";
  inorder(root);
}