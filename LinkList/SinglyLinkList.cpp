#include<iostream>
using namespace std;

class Node{

    public:
    Node*next;
    int data;

    //constructor
    Node(int data){
        this->data=data;
        this->next = NULL;
    }

};


void insertAtHead(Node* &head, int d){
    //create New Node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d)
{
    Node*temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}


void printList(Node* &head){
    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
    //create a node
    Node* n1 = new Node(5);
    Node * head = n1;
    Node * tail = n1;
    insertAtHead(head,50);
    insertAtTail(tail,89);
    printList(head);


return 0;
}