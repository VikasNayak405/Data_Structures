#include <bits/stdc++.h>
using namespace std;

//null = NULL;

class node {
    public : 
    int data;
    node *next; 
      
    node(int x) {
        data = x;
        next = NULL;
    }
};

node *insert_begin(node *head, int val) {
    node *newnode = new node(val);
    newnode->next = head;
    return newnode;
}

node *insert_end(node *head, int val) {
    node *newnode = new node(val);
    node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

node *insert_anypos(node *head,int pos, int val) {
    node *newnode = new node(val);
    node *curr = head;
    for(int i = 0; i < pos-2; i++) {
        curr = curr->next;
    }
    newnode->next = curr->next;
    curr->next = newnode;
    return head;
}

node *delete_begin(node *head) {
    node *curr = head;
    head = head->next;
    delete curr;
    return head;
}

node *delete_end(node *head) {
    node *curr = head;
    while(curr->next->next != NULL) {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
node *delete_anypos(node *head, int pos) {
    if(head == NULL)
        return NULL;
    node *curr = head;
    int i = 1;
    for(int i = 0; i < pos-2; i++) {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int midnode(node *head) {
    node *fast = head;
    node *slow = head;
    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;

}

void removeDup(node *head) {
    node *curr = head;
    while(curr != NULL && curr->next != NULL) {
        if(curr->data == curr->next->data) {
            node *rem = curr->next;
            curr->next = curr->next->next;
            delete rem;
        }
        else curr = curr->next;
    }
    
}

int Nth_node(node *head, int k) {
    node *curr = head;
    int i = 0;
    while(i < k-1) {
        curr = curr->next;
        i++;
    }
    return curr->data;
}

void print(node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    node *head = new node(10);
    head->next = new node(15);
    head->next->next = new node(20);
    head = insert_begin(head, 5);
    head = insert_end(head,25);
    head = insert_anypos(head, 2, 10);
    head = delete_anypos(head, 4);
    print(head);
    cout<<endl;
    removeDup(head);
    print(head);
    cout<<endl<<Nth_node(head, 2);
    //cout<<endl<<"Mid node of the linkedlist : "<<midnode(head);
    //head = delete_begin(head);
    //head = delete_end(head);
    //print(head);
    
    return 0;
}