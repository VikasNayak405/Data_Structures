#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
    node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

node *insert_begin(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    else {
        temp->next = head->next;
        head->next = temp;
        int x = head->data;
        head->data = temp->data;
        temp->data = x;
    }
    return head;
}

node *insert_end(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    node *curr = head;
    while(curr->next != head) {
        curr = curr->next;
    }
    temp->next = head;
    curr->next = temp;
    return head;
}

node *insert_pos(node *head, int pos, int val) {
    node *temp = new node(val);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    node *curr = head;
    for(int i = 0; i < pos-2; i++) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

node *delete_begin(node *head) {
    if(head == NULL) {
        return NULL;
    }
    else if(head->next == NULL) {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node *temp = head->next;
    head->next = head->next->next;
    delete temp;
        
    return head;
}

node *delete_end(node *head) {
    if(head == NULL) {
        return NULL;
    }
    else if(head->next == NULL) {
        delete head;
        return NULL;
    }
    node *curr = head;
    while(curr->next->next != head) {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = head;
    
    delete temp;
    return head;
}

node *delete_pos(node *head, int pos) {
    if(head == NULL) {
        return NULL;
    }
    else if(head->next == NULL) {
        delete head;
        return NULL;
    }
    node *curr = head;
    for(int i = 0; i < pos-2; i++) {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}


void print(node *head) {
    while(head == NULL)
        return;
    if(head != NULL) 
    {
        cout<<head->data<<"\t";
        for(node *temp = head->next; temp != head; temp = temp->next)
            cout<<temp->data<<"\t";
    }
}



int main() {
    node *head = new node(11);
    head->next = new node(22);
    head->next->next = new node(33);
    head->next->next->next = head;
    head = insert_begin(head, 10);
    head = insert_end(head, 30);
    head = insert_pos(head, 5, 40);
    head = delete_begin(head);
    head = delete_end(head);
    head = delete_pos(head, 3);
    print(head);
}