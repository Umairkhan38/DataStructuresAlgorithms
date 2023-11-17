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


//Recursive Function Approach
void reverse(Node* &head, Node* &curr, Node*&prev)
{

    //base case
    if(curr == NULL)
        head = prev;
        return;

    Node*forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;

}


Node*reverseLinkedList(Node* &head) 
{       

        //Recursive Approach
        if(head==NULL || head->next == NULL){
            return head;
        }

        Node*prev=NULL;
        Node*curr = head;
        Node *forward = curr->next;

        reverse(head, curr, prev);
        return head;

        //Iterative Approach

    //     while(curr!=NULL){
    //         forward= curr->next;
    //         curr->next = prev;
    //         prev=curr;
    //         curr=forward;
    //     }   

    // return prev;    
}



void printList(Node *head ){

    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d){
    //create New Node
    Node*temp = new Node(d);
    temp->next = head;
    head = temp;
}



int main()
{

    Node* n1 = new Node(5);
    Node * head = n1;   //head pointer to original n1 node
    insertAtHead(head,50);
    insertAtHead(head,889);

    cout<<"LinkList Before Reversed!! "<<endl;
    printList(head);

    cout<<"LinkList After reversed!"<<endl;
    head=reverseLinkedList(head);
    printList(head);

return 0;
}
