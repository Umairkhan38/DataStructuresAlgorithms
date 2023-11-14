#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;
    Node*prev;

    Node(int data){
        this->data=data;
        this->next = NULL;
        this->prev=NULL;
    }

};

void printList(Node* &head){

    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}


int getLength(Node* &head){

    Node*temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp= temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node*temp= new Node(data);
        head=temp;
        tail=temp; 
    }
    else{

    Node*temp= new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;

    }
}

void insertAtTail(Node* &tail, Node* &head,  int data){

    if(tail == NULL){
     Node*temp = new Node(data);
     head=temp;
     tail=temp;

    }        
    else{
     Node*temp = new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }

}


void insertAtPosition(Node* &head, Node* &tail,  int position, int data)
{

    //if position one at head position
    if(position == 1){
        return insertAtHead(head,tail,data);
    }

    Node*temp = head;
    int count = 1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }

    //insertion at tail
    if(temp->next == NULL){
        insertAtTail(tail,head,data);
        return ;
    }


    Node*insertNode = new Node(data);
    insertNode->next = temp->next;
    temp->next->prev=insertNode;
    temp->next= insertNode;
    insertNode->prev = temp;
}



int main()
{
  Node*n1 = new Node(55);
  Node*head = n1;
  Node*tail = n1;
  insertAtHead(head,tail,95);
  insertAtTail(tail,head,999);
  insertAtPosition(head,tail,2,25522);
  printList(head);  
  cout<<endl<<"the length of link list is : "<<getLength(head);  

return 0;
}
