#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

node *InsertBegin(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL) {
        temp->next = temp;
        //return temp;
    }
    else {
        node *curr = head;
        while(curr->next != head) {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    head = temp;
    return head;
}

node *Optimal_InsertBegin(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int x = head->data;
        head->data = temp->data;
        temp->data = x;
    }
    return head;
}

node *Delete_Head(node *head) {
    if(head == NULL) {
        return NULL;
    } 
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
   head->data = head->next->data;
   node *temp = head->next;
   head->next = head->next->next;
   delete temp;
   return head;
}

void print(node *head) {
    if(head == NULL){
        return;
    }
    if(head != NULL) {
        cout<<head->data<<" ";
       for(node *ptr = head->next; ptr != head; ptr = ptr->next) {
           cout<<ptr->data<<" ";
       }
    }
}

int main() {
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);
    node *third = new node(40);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = head;
    
    Optimal_InsertBegin(head, 55);
    //Delete_Head(head);
    print(head);
    return 0;
}