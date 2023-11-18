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


int getLength(Node*head)
{
    int len = 0;
    while(head!=NULL){
        len++;
        head=head->next;
    }

    return len;
}


Node *findMiddle(Node *head) {
    // Write your code here
    int length = getLength(head);
     int limit = (length/2);
     Node*temp=head;
        int count = 0;
     while(count<limit){
         temp=temp->next;
          count++;  
     }
     return temp;

}


Node*slowAndFastPointer(Node* head){

//if list is empty
    if(head == NULL || head->next==NULL){
        return head;
    }

    Node*fast =head;
    Node*slow =head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
}


void printList(Node* &head){
    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    
    //create a node
    Node* n1 = new Node(5);
    Node * head = n1;   //head pointer to original n1 node
    insertAtHead(head,50);
    insertAtHead(head,86);
    insertAtHead(head,326);
    insertAtHead(head,465);
    cout<<"Link List is "<<endl;
    printList(head);
    cout<<"Middle of linkList is ";
    // Node*temp = findMiddle(head);
    //fast and slow pointer approach
    Node*temp = slowAndFastPointer(head);
    cout<<temp->data;
    

    return 0;
}
