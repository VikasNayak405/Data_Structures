#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

void print(node *head) {
    while(head != NULL) {
        cout<<head->data<<"\t";
        head = head->next;
    }
}

void print_recursive(node *head) {
    while(head == NULL) 
        return;
    cout<<head->data<<"\t";
    print_recursive(head->next);
}

int search(node *head, int x) {
    int pos = 1;
    while(head != NULL) {
       if(head->data == x) {
           return pos;
       }
       else
            pos++;
            head = head->next;
    }
    return 0;
}

node *insert_begin(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL){
        //head->data = val;
        return temp;
    }
    temp->next = head;
    head = temp;
    return head;
}

node *insert_end(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL)
        return temp;
    node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;

}

node *delete_first(node *head) {
    if(head == NULL) {
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *delete_last(node *head) {
    if(head == NULL) {
        return NULL;
    }
    node *curr = head->next;
    while(curr->next->next != NULL) {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

node *insert_anypos(node *head, int pos, int val) {
    node *temp = new node(val);
    node *curr = head;
    for(int i = 0; i < pos-2; i++) {
        curr = curr->next;
    }
    temp->next =curr->next;
    curr->next = temp;
    return head;
}

node *sortedinsert(node *head, int val) {
    node *temp = new node(val);
    if(head == NULL){
        return temp;
    }
    else if(val < head->data) {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while(curr->next != NULL && curr->next->data < val) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int middlenode(node *head) {
    if(head == NULL) {
        return 0;
    }
    node *slow = head;
    node *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"Middle Node Of the Linked List : "<<slow->data;
    return 0;
}

int Nthnode_From_End(node *head, int n) {
    int len = 0;
    for(node *temp = head; temp != NULL; temp = temp->next)
        len++;
    // if(len < n)
    //     return;
    node *curr = head;
    for(int i = 1; i < len-n+1; i++)
        curr = curr->next;
    int x = curr->data;
    return x;
}

node *reverse(node *head) {
    node *curr = head;
    node *prev = NULL;
    while(curr != NULL) {
        node *Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

node *sorting(node *head) {
    if(head->next == NULL)
        return head;
    node *temp = NULL;
    node *curr = head;
    while(curr != NULL) {
        temp = curr->next;
        while(temp != NULL) {
            if(curr->data > temp->data) {
                int swap;
                swap = temp->data;
                temp->data = curr->data;
                curr->data = swap;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return head;
}

void Remove_duplicate(node *head) {
    node *curr = head;
    while(curr != NULL && curr->next != NULL) {
        if(curr->data == curr->next->data) {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
}

int main() {
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head = insert_begin(head, 44);
    head = insert_end(head, 55);
    head = delete_first(head);
    head = delete_last(head);
    head = insert_anypos(head, 3, 70);
    // head = sortedinsert(head, 45);
    // head = reverse(head);
    
    head = sorting(head);
    Remove_duplicate(head);
    print_recursive(head);
    cout<<endl;
    middlenode(head);
    cout<<endl<<" nth node form the end : "<<Nthnode_From_End(head, 3);
    cout<<endl;
    cout<<"the element find int the position of "<<search(head, 20)<<endl;
    return 0;
}