#include<iostream>
//#include <vector>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x) {
    Node *temp = new Node(x);
       if(head == NULL) {
           return temp;
       }
       temp->next = head->next;
    //   head = temp;
       return temp;
}

Node *insertEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *insertPos(Node *head, int pos, int value) {
    Node *temp = new Node(value);
    if(pos == 1) {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for(int i = 1; pos >= i; i++) {
        curr = curr->next;
    }
    if(curr == NULL) 
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;

}

Node *sortedInsert(Node *head, int x) {
    Node *temp = new Node(x);
    if(head == NULL) 
        return temp;
    if(head->data > x) 
        temp->next = head;
        return temp;
    Node *curr = head;
    if(curr->next != NULL && curr->next->data < x) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

//print mid of the of the node in the list
void printMiddle(Node *head) {
    if(head == NULL) 
        return;
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<endl<<"Middle Node of the list : "<<slow->data<<endl;
}

//Nth Node from the last of LinkedList
void print_Nth_From_ENd_method_1(Node *head, int n) {
    int len = 0;
    for(Node *curr = head; curr != NULL; curr = curr->next) {
        len++;
    }
    if(len < n)
        return;
    Node *curr = head;
    for(int i = 1; i < len-n+1; i++) {
        curr = curr->next;
    }
    cout<<"Nth Node from the last of LinkedList : "<<curr->data<<endl;
}

//Nth Node from the last of LinkedList 2nd method using 2 pointer
void print_Nth_End_method_2(Node *head, int n) {
    if(head == NULL) 
        return;
    Node *first = head;
    for(int i = 0; i < n; i++) {
        first = first->next;
    }
    Node *second = head;
    while(first != NULL) {
        second = second->next;
        first = first->next;
    }
    cout<<"Nth Node from the last of LinkedList : "<<second->data<<endl;
}

Node *reverseList(Node *head) {
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

void RemoveDuplicicate(Node *head) {
    Node *curr = head;
    while(curr != NULL && curr->next != NULL) {
        if(curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
}

Node *deleteFirstNode(struct Node *head) {
    if (head == NULL)
        return NULL;
    Node* temp = head;
    head = head->next;
 
    delete temp;
 
    return head;
}

Node *deleteLastNode(struct Node *head) {
    if(head == NULL) 
        return NULL;
    if(head->next == NULL) 
        return NULL;
    Node *second_last = head;
    while(second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    delete(second_last->next);

    second_last->next = NULL;
    return head;
}

void printListRecur(Node *head) {
    if(head == NULL) {
        return;
    }
    cout<<head->data<<" ";
    printListRecur(head->next);
} 

int main() {
    Node *head = NULL;
    head = insertBegin(head, 10);
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    //head = insertEnd(head, 60);
    
    // head = deleteFirstNode(head);
    // head = deleteLastNode(head);
    printMiddle(head);
    // print_Nth_From_ENd_method_1(head, 3);
    // print_Nth_End_method_2(head, 3);
    //head = reverseList(head);
    //RemoveDuplicicate(head);
    printListRecur(head);
    return 0;
}