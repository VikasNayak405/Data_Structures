#include <iostream>
using namespace std;

struct node {
    int data;
    node *next, *prev;
    node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

//insert in the begin of the Doubly linkedlist.
node *insert_begin(node *head, int val) {
    node *temp = new node(val);
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    return temp;
}

void print(node *head) {
    if(head == NULL)
        return;
    else {
        for(node *curr = head; curr != NULL; curr = curr->next) {
            cout<<curr->data<<"\t";
        }
    }
}

int main() {
    node *head = new node(11);
    node *temp1 = new node(22);
    node *temp2 = new node(33);
    head->prev = NULL;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = NULL;
    insert_begin(head, 10);
    print(head);
}