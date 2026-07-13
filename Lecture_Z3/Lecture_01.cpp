// Linked List:- 
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void Print(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* InsertAtHead(int val, Node *&head){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;
}

Node* InsertAtTail(int val, Node *&head){
    Node* temp = new Node(val);
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = temp;
    temp->next = NULL;
    return head;
}

Node* InsertAtIndex(int val, Node *&head, int index){
    Node* temp = new Node(val);
    Node*curr = head;
    while(index != 0 && curr->next != NULL){    
        index--;
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);
    InsertAtHead(25, head);
    InsertAtTail(30, head);
    InsertAtIndex(155, head, 2);
    Print(head);
    return 0;
}