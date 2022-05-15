// #include <iostream> 
#include<bits/stdc++.h>
#include <queue>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};

void inorder(node *root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

void preorder(node *root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}

int height(node *root) {
    if(root == NULL) 
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int printKNode(node *root, int k) {
    if(root == NULL) {
        return 0;
    }
    else if(k == 0)
        cout<<root->data<<"\t";
    else {
        printKNode(root->left, k-1);
        printKNode(root->right, k-1);
    }  
    return 0;
}

int getSize(node *root) {
    if(root == NULL)
        return 0;
    else
        return 1 + getSize(root->left) + getSize(root->right);
}

void levelOrderTraverse(node *root) {
    if(root == NULL) return;
    queue<node*> q;
    q.push(root);
    while(q.empty() == false) {
        node *curr = q.front();
        q.pop();
        cout<<curr->data<<"\t";
        if(curr->left != NULL) 
            q.push(curr->left);
        if(curr->right != NULL)
            q.push(curr->right);
    }
}


int getMax(node *root) {
    if(root == NULL) return INT_MIN;
    return max(root->data, max(getMax(root->left), getMax(root->right)));
}

int getMin(node *root) {
    if(root == NULL) return INT_MAX;
    return min(root->data, min(getMin(root->left), getMin(root->right)));
}

void iterative_inorder(node *root) {
    stack<node *> s;
    node *curr = root;
    while(curr != NULL || s.empty() == false) {
        while(curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<"\t";
        curr = curr->right;
    }
}

void iterative_preorder(node *root) {
    stack<node *> s;
    s.push(root);
    while(s.empty() == false) {
        node *curr = s.top();
        cout<<curr->data<<"\t";
        s.pop();
        
        if(curr->right) 
            s.push(curr->right);
        if(curr->left)
            s.push(curr->left);
    }

}


int main() {
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    // root->left->left = new returnode(40);
    // root->left->right = new node(50);
    root->right->left = new node(40);
    root->right->right = new node(50);
    cout<<"inorder tree traversal : ";  
    inorder(root);
    cout<<endl<<"preorder tree traversal : ";
    preorder(root);
    cout<<endl<<"postorder tree traversal : ";
    postorder(root);
    cout<<endl<<"height of the tree : "<<height(root)<<endl;
    cout<<"print the Kth Node : "<<printKNode(root,2)<<endl;
    cout<<"print level wise : ";
    levelOrderTraverse(root);
    cout<<endl<<"size of the tree : "<<getSize(root);
    cout<<endl<<"maximum of the tree : "<<getMax(root);
    cout<<endl<<"maximum of the tree : "<<getMin(root)<<endl;
    cout<<"iterative traversal of inorder : ";
    iterative_inorder(root);
    cout<<endl<<"iterative traversal of preorder : ";
    iterative_preorder(root);

    



    return 0;
}