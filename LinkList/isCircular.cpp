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



bool isCircular(Node* &head){

    if(head == NULL){
        return true;
    }

    Node*temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    } 

    if(temp==NULL){
        return false;
    }
    return true;
        
}



void printList(Node *head ){

    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}





void insertNode(Node* &tail, int element, int data){

    //in case emppty list
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail=newNode;
        newNode->next = newNode; 
    }
    else{

        //in case the list consist some Nodes
        Node*curr = tail;

        while(curr->data != element){
            curr=curr->next; 
        } 

        Node*newNode = new Node(data);
         newNode->next = curr->next;
         curr->next = newNode;

    }

}



int main()
{

    Node * tail = NULL;   //head pointer to original n1 node
    insertNode(tail,5,50);
    insertNode(tail,50,889);
    insertNode(tail,889,5);
    isCircular(tail)==true?cout<<"the list is Circular ": cout<< "List is not Circular";

    return 0;
}
