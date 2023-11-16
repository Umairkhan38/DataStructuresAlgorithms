#include<iostream>
using namespace std;

class Node{

    public:
     int data;   
     Node*next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is Freed for the value "<<value<<endl;
    }

};

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


void deleteNode(Node* &tail, int value){

    //if list is empty
    if(tail == NULL){
        cout<<"Sorry!! List is Empty, please insert an element"<<endl;
        return ;
    }
    else{
        //if list has elements
        Node * prev;
        Node*curr= prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;

        //if only one element in link list
        if(tail == curr){
            tail = prev;
        }    
        else if(tail == curr){
            tail = prev;
        }

        curr->next=NULL;
        delete curr;
    }



}

void printlist(Node* tail){

    Node*temp = tail;

    if(tail == NULL){
        cout<<"Sorry List is Empty !!";
        return;
    }

   do{
    cout<<tail->data<<" ";
    tail = tail->next;
    }while(tail!= temp);

    cout<<endl;
}


int main()
{

    //We don't need a head pointer in circular linklist but wen need a tail pointer
    Node*tail = NULL;
    insertNode(tail,2,1020);
    insertNode(tail,1020,11);
    insertNode(tail,11,65);
    cout<<"Link list before Deletion"<<endl;
    printlist(tail);
    deleteNode(tail,1020);
    cout<<"Link list After Deletion"<<endl;
    printlist(tail);


return 0;
}

