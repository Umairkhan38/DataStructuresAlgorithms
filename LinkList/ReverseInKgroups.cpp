#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        this->next=NULL;
    }

};


void insertAthead(Node* &head, int data){

    Node*temp = new Node(data);
    temp->next = head;
    head = temp;
}

Node*reverseInKGroups(Node* &head, int k){

    //if Node elements are less than k
    int size = 0;
    Node*temp = head;
    while(temp !=NULL){
        temp=temp->next;
        size++;
    }

    if(size<k){
        return head;
    }


    // if No Node is present
    if(head == NULL){
        return NULL;
    }

    //base case
    if(head->next == NULL){
        return head;
    }    

    Node*next = NULL;
    Node*prev = NULL;
    Node*curr = head;
    int count = 0;

    while(curr != NULL && count < k){

        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        count++;
    }

    //Recursive call
    if(next!=NULL){
        head->next = reverseInKGroups(next, k);
    }

     return prev;   
}


void printList(Node* head){

    Node*temp = head;
    cout<<"Link List after Reversed In K groups "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    } 
    cout<<endl;
}

int main()
{
    Node*head;
    int k=2;
    insertAthead(head,56);
    insertAthead(head,2);
    insertAthead(head,36);
    insertAthead(head,35);
    Node*ans = reverseInKGroups(head,k);
    printList(ans);

return 0;
}

