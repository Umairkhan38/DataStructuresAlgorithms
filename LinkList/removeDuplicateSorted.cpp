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

Node * removeDuplicates(Node *head)
{
    // Write your code here
    if(head == NULL){
        return NULL;
    }

    Node*curr = head;
    while(curr!=NULL){
        if( (curr->next !=NULL) && (curr->data == curr->next->data)){
        Node* next_to_next = curr->next->next;
        Node* deleteNext = curr->next;
            delete(deleteNext);
            curr->next = next_to_next;
        }else{
            curr = curr->next;
        }
    }
    return head;
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
    insertAtHead(head,86);
    insertAtHead(head,465);
    cout<<"List Before Deletion of Duplicate Elements : "<<endl;
    printList(head);
    cout<<"List After Deletion of Duplicate Elements : "<<endl;
    head = removeDuplicates(head);
    printList(head);

    return 0;
}
