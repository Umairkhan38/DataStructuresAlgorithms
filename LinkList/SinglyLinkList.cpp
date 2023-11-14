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

    //desctructor to delete the node
    ~Node(){
        int value = this->data;
        //free memory
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for data "<<value<<endl;

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
    tail = temp;
}


void insertAtPosition(Node* &head, Node* &tail,  int position, int d){

    //if psition is 1
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }


    Node*temp = head;
    int count = 1;
    
    while(count<position){
        temp=temp->next;
        count++;  
    }

    //in case insertion position is in last of list
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return ;
    }

    //create a node to insert
    Node* insertNode = new Node(d);
    insertNode->next=temp->next;
    temp->next=insertNode; 

}


void deleteAtPosition(Node* &head, Node* &tail, int position){

    //deleteing first element
    if(position == 1){
        Node*temp = head;
        head=head->next;
        delete temp;           
    }
    else{
        //deleting middle or any node 
        Node *curr = head;
        Node*prev = NULL;

        int count = 1;
        while (count<position-1)
        {   
            prev=curr;
            curr=curr->next;            
            count++;
             if(curr->next==NULL){
                tail= prev;
             }
        }   

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }


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
    Node * head = n1;   //head pointer to original n1 node
    Node * tail = n1;   //tail pointer to original n1 node 
    insertAtHead(head,50);
    insertAtTail(tail,89);
    insertAtTail(tail,59);

    // here inserting after second position element
    insertAtPosition(head,tail,3,1005);
    printList(head);

    cout<<"\nNodes After Deletion"<<endl;
    deleteAtPosition(head,tail,4);
    printList(head);



    return 0;
}
