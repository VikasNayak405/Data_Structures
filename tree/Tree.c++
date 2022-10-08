#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node(int k) {
        data = k;
        left = right = NULL;
    }
};

void inorder(node *root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

void preorder(node *root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int height(node *root) {
    if(root == NULL) {
        return 0;
    }
    else return max(height(root->left), height(root->right)) + 1;
}

void printKNode(node *root, int k) {
    if(root == NULL) return;
    else if(k == 0) {
        cout<<root->data<<" ";
    }
    else {
        printKNode(root->left, k-1);
        printKNode(root->right, k-1);
    }
}

void printLevelwise(node *root) {
    if(root == NULL) return;
    queue <node *> q;
    q.push(root);
    while(q.empty() == false) {
        node *curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL)
            q.push(curr->left);
        if(curr->right != NULL) 
            q.push(curr->right);
    }
}

int getsize(node *root) {
    if(root == NULL) 
        return 0;
    else 
        return 1 + getsize(root->left) + getsize(root->right);
}

int getMax(node *root) {
    if(root == NULL)
        return INT_MIN;
    else 
        return max(root->data, max(getMax(root->left), getMax(root->right)));
}

int main() {
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    // inorder(root);
    // preorder(root);
    postorder(root);
    cout<<endl<<"Height of the tree : "<<height(root);
    cout<<endl<<"Kth position Elements of the tree : ";
    printKNode(root, 2);
    cout<<endl<<"BFS : ";
    printLevelwise(root);
    cout<<endl<<"the size of the tree : "<<getsize(root);
    cout<<endl<<"The max element of the tree : "<<getMax(root);
    return 0;
}