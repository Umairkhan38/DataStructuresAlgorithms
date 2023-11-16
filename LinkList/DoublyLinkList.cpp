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

    //creating na destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memeory freed!"<<endl;

    }

};




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


void deleteNode(Node* &head, Node* &tail, int position)
{
    //deleting node from first position
    if(position == 1){
        Node*temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        
    }else{

        //deleteing from middle or last
        Node*curr = head;
        Node*prev = NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
            if(curr->next==NULL){
                tail= prev;
             }
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

void printList(Node* &head){

    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main()
{
  Node*n1 = new Node(55);
  Node*head = n1;
  Node*tail = n1;
  insertAtHead(head,tail,95);
  insertAtTail(tail,head,999);
  insertAtPosition(head,tail,2,25522);
  cout<<"List before deletion"<<endl;
  printList(head);  
  deleteNode(head,tail,4);
  cout<<"List after deletion"<<endl;
  printList(head);  
  cout<<endl<<"the length of link list is : "<<getLength(head)<<endl;  
  cout<<"tail is "<<tail->data;

return 0;
}
