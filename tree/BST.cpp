#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node(int val) {
        data = val;
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
    if(root == NULL)
        return;
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

node *insertRecur(node *root, int val) {
    if(root == NULL)
        return new node(val);
    if(root->data > val) 
        root->left = insertRecur(root->left, val);
    else if(root->data < val)
        root->right = insertRecur(root->right, val);
    return root;    
}

node *insertIterative(node *root, int val) {
    if(root == NULL)
        return new node(val);
    node *temp = new node(val);
    node *curr = root;
    node *parent = NULL;
    while(curr != NULL) {
        parent = curr;
        if(curr->data > val)
            curr = curr->left;
        else if(curr->data < val)
            curr = curr->right;
        
    }
    if(parent == NULL)
        parent = temp;
    else if(val < parent->data)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}

node *minNode(node *root) {
    node *curr = root;
    while(curr && curr->left != NULL)
        curr = curr->left;
    return curr;
}


node *delNode(node *root, int val) {
    if(root == NULL)
        return root;
    else if(val < root->data)
        root->left = delNode(root->left, val);
    else if(val > root->data)
        root->right = delNode(root->right, val);
    else {
        if(root->left == NULL) {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if(root->right == NULL) {
            node *temp = root->right;
            delete root;
            return temp;
        }
        node *curr = minNode(root->right);
        root->data = curr->data;
        root->right = delNode(root->right, curr->data);
    }
    return root;
}

int main() {
    node *root = NULL;
    root = insertIterative(root, 50);
    insertIterative(root, 30);
    insertIterative(root, 20);
    insertIterative(root, 40);
    insertIterative(root, 70);
    insertIterative(root, 60);
    insertIterative(root, 80);
    cout<<"inorder traversal : ";
    inorder(root);

    cout<<endl<<"preorder traversal : ";
    preorder(root);
    cout<<endl<<"postorder traversal : ";
    postorder(root);
    delNode(root, 70);
    cout<<endl;
    cout<<endl<<"<--- AFTER DELETION --->";
    cout<<endl<<endl;
    cout<<"inorder traversal : ";
    inorder(root);

    cout<<endl<<"preorder traversal : ";
    preorder(root);
    cout<<endl<<"postorder traversal : ";
    postorder(root);
    cout<<endl;
    return 0;

}