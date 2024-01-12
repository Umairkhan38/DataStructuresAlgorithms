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


Node*removeDuplicates(Node* &head)
{

     if(head == NULL){
    return NULL;
  }
  
  Node* curr = head;
  

  while(curr != NULL){
    Node* prev = curr;
    Node * temp = curr -> next;
    
    while(temp != NULL){
      if(curr-> data == temp -> data){
        Node* deleteNode = temp;
        prev -> next = temp -> next;
        temp = temp -> next;
        delete(deleteNode);
      }else{
        prev = temp;
        temp = prev-> next;
      }
    }
    curr = curr -> next;
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
    insertAtHead(head,56);
    insertAtHead(head,86);
    insertAtHead(head,50);
    insertAtHead(head,56);
    cout<<"List Before Deletion of Duplicate Elements : "<<endl;
    printList(head);
    cout<<"List After Deletion of Duplicate Elements : "<<endl;
    head = removeDuplicates(head);
    printList(head);

    return 0;
}
