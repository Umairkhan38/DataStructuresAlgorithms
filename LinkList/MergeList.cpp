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

Node* solve(Node* first, Node* second)
{

    Node*curr1 = first;
    Node*next1 = curr1->next;
    Node*curr2 = second;
    Node*next2 = curr2->next;

       //if only one elem present in first list
    if(first->next == NULL){
        first->next = second;
        return first;
    } 

    while((next1!=NULL) && (curr2!=NULL)){

      if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {

        curr1->next = curr2;
        next2 = curr2->next;
        curr2->next = next1;

        // updating pointers
        curr1 = curr2;
        curr2 = next2;
      }
      else{
          curr1=next1;
          next1=next1->next;

          if(next1==NULL){
              curr1->next=curr2;
              return first;
          }  

      }
    }
    return first;

}



Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.

    if(first==NULL){
        return second;
    }

    if(second == NULL){
        return first;
    }


    if(first->data <= second->data){
        solve(first, second);
    }
    else{
        solve(second,first);
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

Node*firstHead = new Node(96);
insertAtHead(firstHead, 63);
insertAtHead(firstHead, 5);

Node*secondHead = new Node(86);
insertAtHead(secondHead, 51);
insertAtHead(secondHead, 6);

Node*mergeHead = sortTwoLists(firstHead,secondHead);
printList(mergeHead);

return 0;
}